
 -------------------------------------------------------
 #define INT_MAX 0x8000 /*Really not a good idea*/

 In this example, you expect INT_MAX to contain value (-32768); the compiler promotes the constant
 to unsigned, however, and the value of INT_MAX, 32,768, is probably not what you expect.
 -------------------------------------------------------

 ------------------------------------------------------
 limits.h

 CHAR_BIT 8 Number of bits in a char type
 SCHAR_MIN -127 Minimum signed char type
 SCHAR_MAX 127 Maximum signed char type
 UCHAR_MAX 255 Maximum unsigned char type
 CHAR_MIN SCHAR_MIN
 CHAR_MAX SCHAR_MAX

 MB_LEN_MAX 1 Maximum number of bytes in multibyte char

 SHRT_MIN -32767 Minimum (signed) short type
 SHRT_MAX 32767 Maximum (signed) short type
 USHRT_MAX 65535 Maximum unsigned short type
 INT_MIN -32767 Minimum (signed) int type
 INT_MAX 32767 Maximum (signed) int type
 UINT_MAX 65535 Maximum unsigned int type
 
 LONG_MIN -2147483647 Minimum (signed) long type
 LONG_MAX 2147483647 Maximum (signed) long type
 ULONG_MAX 4294967295 Maximum unsigned long type

 ------------------------------------------------
 // You cannot depend on the compiler to store identical strings
 // either once in memory or separately for each occurence. Nor
 // can you depend on the compiler (or the CPU) to make a string
 // constant read-only. On some systems, this attempt cause an
 // error (at excution time); on others, the program generally
 // fails.
 
 // Expect for string constants, obtaining the address of a
 // constant or modifying the constant is not possible. Using
 // the address of operation (&) on a constant isn't allowed.
 
 -------------------------------------------------

 extern int nArray[];

 // This statement tells the compiler two important things:
 // 1. The array has been delcared (and storage allocated) in a different souruce file
 // The size of the array is unkown
 
 // If you choose to use the following definition:
 
 extern int nArray[MAX_SIZE];

 // you will tell the compiler at least the number of elements in the array.
 // This is a good start in being able to ensure that you hvae not exceeded the bounds of the array.
 // Again, note that the majority of C compilers (whether ANSI or not) do not check array (or string) bounds.
 
 --------------------------------------------------


