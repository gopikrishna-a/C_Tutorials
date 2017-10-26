
#include <stdio.h>
#include <float.h>
#include <limits.h>


int main() {

//For Float
   printf("Storage size of float: %ld Bytes\n",sizeof(float));
   printf("float minium value is: %E\n", FLT_MIN);
   printf("float maxium value is: %E\n", FLT_MAX);
   printf("float precision value is: %d\n", FLT_DIG);


//For Int
   printf("Storage size of int: %ld Bytes\n",sizeof(int));
   printf("int minium value is: %d\n", INT_MIN);
   printf("int maxium value is: %d\n", INT_MAX);

   return 0;
}

/*
Output:

Storage size of float: 4 Bytes
float minium value is: 1.175494E-38
float maxium value is: 3.402823E+38
float precision value is: 6
Storage size of int: 4 Bytes
int minium value is: -2147483648
int maxium value is: 2147483647
*/
