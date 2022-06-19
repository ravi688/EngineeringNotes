

 /*
  * Typical services offered by most debuggers follow:
  *
  *
  * 1. Execution in an environment simlar to the typical operating
  *    environment. This involves using as little memory as
  *    possible (a requirement that was difficult with DOS on a
  *    PC, but is easier with rapid acceptance of protected-mode
  *    operating systems such as Windows and OS/2) and not 
  *    interfering with the output device (the screen). To
  *    avoid interfering with the monochrome adapter, or MDA),
  *    or two workstations (with network-based debuggin).
  *
  * 2. Memory examination. This includes simple memory dumps, 
  *    examination of external variables (by name), and 
  *    examination of local variables.
  *
  * 3. Memory modification. This generally is limited to changing
  *    variables, both global and local.
  *
  * 4. Program breakpoints. At a programa breakpoint (a specified
  *    point of interruption), the debugger is given control
  *    before the line or instruction is executed. 
  *    At a breakpoint, you might examine variables, registers
  *    or memory.
  *
  * 5. Memory breakpoints. These are simlar to program 
  *    breakpoints, but the memory specified need not be an
  *    instruction. For example, the breakpoint could be at a 
  *    data object. Memory breakpoints are useful if you want
  *    to determine what part of the code is modifying a variable.
  *    You could specify a value at the given location, and
  *    when the value is stored there, the breakpoint is entered.
  *
  * 6. Program modification. Some debuggers enable you to correct
  *    minor errors, then continue program execution. This 
  *    feature is useful for programs with complex setup or
  *    intialization processes.
  *
  * 7. Execution stepping. Almost all debuggers can execute
  *    statements one line at a time. This technique, called
  *    stepping, enables you to trace t he flow of the program
  *    (for example, the number of times the loop executed, 
  *    and the functions and subroutines that were called).
  *    Some debuggers enable you to trace in both the high-level
  *    language (such as C) and assembly (or machine) language.
  *    Tracing the program's flow in C is often the fastest
  *    and most valuable option because you can see the effects
  *    of each program statement.
  *
  */
