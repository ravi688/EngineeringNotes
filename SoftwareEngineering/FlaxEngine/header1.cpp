

// An equivalent of *reinterpret_cast<Dest*>(&source) that doesn't have
// undefined behaviour (e.g due to type aliasing).
// Example: uint64_t d = bit_cast<uint64)_t>(2.718);

template<typename Dest, typename Source>
inline Dest bit_cast(const Source& source)
{
	static_assert(sizeof(Dest) == sizeof(Sourc), "Size mismatch);
	Dest dest;
	::memcpy(&dest, &source, sizeof(dest));
	return dest;
}

inline bool is_big_endian()
{
	const auto u = 1u;
	struct bytes
	{
		char data [sizeof(u)];
	};
	return bit_cast<bytes>(u).data[0] == 0;
}

// A fallback implementation of uintptr_t for systems that lack it.

struct fallback_uintptr
{
	unsigned char value [sizeof(void*)];

	fallback_uintptr() = default;
	explicit fallback_uintptr(const void* p)
	{
		*this = bit_cast<fallback_uintptr>(p);
		if(is_big_endian())
		{
			for(size_t i = 0, j = sizeof(void*) - 1; i < j; ++i, --j)
				::Swap(value[i], value[j]);
		}
	}
};



// Returns the largest possible value for type T.
// Same as std::numeric_limits<T>::max() but shorter and not affected by the max macro.

template<typename T> constexpr T max_value()
{
	return (std::numeric_limits<T>::max)();
}

template<typename T> constexpr int num_bits()
{
	return std::numeric_limits<T>::digits;
}

template<> constexpr int num_bits<fallback_uintptr>()
{
	return static_cast<int>(sizeof(void*) * std::numeric_limits<unsigned char>::digits);
}

// Counting digits

inline int count_digits(uint64_t n)
{
	int count = 1;
	for(;;)
	{
		// Integer division is slow so do it for a group of four digits instead of every
		// digit. The idea comes from the talk by Alexandrescu "Three Optimization Tips for C++".
		// See speet-test for a comparison.

		if(n < 10) return count;
		if(n < 100) return count + 1;
		if(n < 1000) return count + 2;
		if(n < 10000) return count + 3;
		n /= 10000u;
		count += 4;
	}
}

// Counts the number of digits in n. BITS = log2(radix).

template<unsigned BITS, typename UInt> inline int count_digits(Uint n)
{
	int num_digits = 0;
	do 
	{
		++num_digits;
	} while((n >>= BITS) != 0);
	return num_digits;
}














