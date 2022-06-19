
 Console I/O functions
 ---------------------------


 cgets() // Gets a string from the console
 cprintf() // Performs a formatted print to the console
 cputs()  // Writes a string to the screen
 cscanf() // Performs a formatted read from the console (keyboard)
 getch() // Gets a character from the keyboard but does not echo
	 // the cahracter to the screen
 getche() // Gets a character from the keyboard and echoes the 
	  // character to the screen
 kbhit() // Returns immediately witih the return code indicating
	 // whether a key has been pressed. Will not wait for 
	 // a keypress
 putch() // Writes a character to the screen
 ungetch() // Allows one cahracter to be pushed back to the
	   // keyboard. The cahracter put back doesn't need to be
	   // the last character read. Only one character maybe 
	   // put back.
 
 // The next most commonly used function is the kbit() function,
 // which has no stream function counterpart. The kbhit() function
 // enables you to poll the keyboard for a keypress. Many business
 // applications have little use for this function. Games,
 // however, run in real time, so they must check for user input
 // without stopping the action. The kbhit() function enables
 // a program to do just that.

 
