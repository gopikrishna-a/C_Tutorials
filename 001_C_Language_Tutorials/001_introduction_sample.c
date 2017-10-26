#include <stdio.h> 

/* Line:1 Lines beginning with # are processed by the preprocessor before the program is compiled.

the #include <stdio.h> tells the processor include the contents of the standard input/output header (<stdio.h>) in the program.

in this case we are using printf whic is in #include <stdio.h>  header file */


int main( void )

{

/* Line:10  main() is a function every c program execution starts at fuction main
   The keyword int to the left of main indicates that main “returns” an integer
   The void in parentheses here means that main does not receive any information.
   The body of a c program contains in between {  } braces

/**/


printf( "Hello World!\n" );

/*Line:22 printing a message by calling the print function*/

return 0;

/*Line:26  When the return statement is used at the end of main as shown here, the value 0 indicates
  that the program has terminated successfully.*/

}
