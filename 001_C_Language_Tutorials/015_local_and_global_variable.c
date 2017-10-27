/*

Local Variables:
================
Variables that are declared inside a function, these variables we can't access with other functuions.

Global Variables:
=================
Global variables are defined outside a function, usually on top of the program. 
They can be accessed inside any of the functions defined for the program.
*/


//Local variable example:

#include <stdio.h>
 
int main () {

  /* local variable declaration */
  int a, b;
  int c;
 
  /* actual initialization */
  a = 10;
  b = 20;
  c = a + b;
 
  printf ("value of a = %d, b = %d and c = %d\n", a, b, c);
 
  return 0;
}





//Global variable example:


#include <stdio.h>

/* global variable declaration */
int a = 50;

int compare_three_nums();

int main()

{

	printf("%d\n", a);
	compare_three_nums();
	return 0;

}

int compare_three_nums()

{

	printf("%d\n", a);
	    
return 0;

}

