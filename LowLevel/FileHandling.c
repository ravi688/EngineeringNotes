

 fopen() // Opens the specificed file with specified mode
 freopen() // Closes the file specified, then opens a new file as specified

 fdopen() // Opens a duplicate stream file for an already open low-level file

 
 clearerr() // Clears the current error condition flags
 fclose()   // Closes the specified file
 fcloseall() // Closes all open stream files.
 fdopen()   // Opens a low-level file as a stream file.
 feof()     // Checks for end-of-file in a stream file.
 fflush()   // Flushes pending I/O for a file.
 fgetc()    // Gets a character from a stream file.
 fgetchar() // Gets the next character from a file.
 fgetpos()  // Gets a file's curent position, for use by fsetpos().
 fgets()    // Gets a string from the specified file.
 fileno()   // Returns the low-level file handle for a stream file.
 flushall() // Flushes pending I/O from all opened files.
 fopen()    // Opens a stream file.
 fputc()    // Writes a character to the specified file.
 fputchar() // Writes a character to the specified file
 fputs()    // Writes the buffer to the stream file.
 fread()    // Reads from the specified stream file.
 freopen()  // Reopns the file.
 fscanf()   // Does a formatted read from a stream file.
 fseek()    // Sets the file's current position as specified.
 fsetpos()  // Sets the file to the position obtained by fgetpos().
 ftell()    // Gets the file's current position.
 fwrite()   // Writes to a specified file.
 getc()     // Gets a character.
 getchar()  // Gets a character from stdin.
 gets()     // Gets a string from stdin.
 getw()     // Gets an integer from the specified file.
 printf()   // Does a formatted write to stdout.
 putc()     // Writes a character to a stream file.
 putchar()  // Writes a character t o stdout.
 puts()     // Writes a buffer to stdout.
 putw()     // Writes an integer value to a file.
 rewind()   // Sets the file's current position to the beginning
	    // of the file.
 rmtmp()    // Removes (deletes) temporary files opened with tmpfile().
 scanf()    // Does a formatted read from stdin.
 setbuf()   // Sets the stream file's buffer.
 setvbuf()  // Sets the stream file's buffer (variable size buffer).
 sprintf()  // Does a formatted write to a string
 sscanf()   // Reads formatted input from a string.
 tempnam()  // Gets a temporary filename, allowing the
	    // specification of a different directory
 ungetc()   // Puts back a character to a file opened in the read
	    // mode. The character put back does not need to be
	    // the same as the one read, but only one character
	    // can be put back at a time. Two successive calls
	    // to ungetc() without an intervening read will fail.
 vfprintf() // Does a formatted write to the specified file.
	    // The output is pointed to by a paramter-list
	    // pointer.
 vprintf()  // Does a formatted write to stdout. The output is
	    // pointed to by a parameter-list pointer.
 vsprintf() // Does a formatted write to he specified string.
	    // Output is pointed to by a paramter-list pointer.

 

 Low-level file functions
 --------------------------------

 close()   // Closes the specified file.
 creat()   // Creates a new file.
 dup()     // Creates a new, duplicate file handle.
 dup2()    // Creates a new, duplicate file handle and sets the 
	   // second (specified) file handle to the first file.
 eof()     // Tests for an end-of-file.
 seek()    // Seeks (changes the read/write pointer) to a new 
	   // place in the file.
 open()    // Opens an existing file.
 read()    // Reads an opened file.
 sopen()   // Opens a file in shared mode.
 tell()    // Returns the value of the read/write pointer.
 write()   // Writes data to a file that has been opened for output.

 

