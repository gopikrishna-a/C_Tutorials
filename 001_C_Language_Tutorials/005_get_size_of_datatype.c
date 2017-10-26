
#include <stdio.h>
#include <limits.h>

int main() {


   printf("Storage size of char:			%ld Byte\n",sizeof(char));
   printf("Storage size of unsigned char:		%ld Byte\n",sizeof(unsigned char));
   printf("Storage size of signed char:		%ld Byte\n",sizeof(signed char));


   printf("Storage size of int:			%ld Bytes\n",sizeof(int));
   printf("Storage size of unsigned int:		%ld Bytes\n",sizeof(unsigned int));
   printf("Storage size of short:			%ld Bytes\n",sizeof(short));
   printf("Storage size of unsigned short:		%ld Bytes\n",sizeof(unsigned short));
   printf("Storage size of long:			%ld Bytes\n",sizeof(long));
   printf("Storage size of unsigned long:		%ld Bytes\n",sizeof(unsigned long));

   printf("Storage size of float:			%ld Bytes\n",sizeof(float));
   printf("Storage size of double:			%ld Bytes\n",sizeof(double));
   printf("Storage size of long double:		%ld Bytes\n",sizeof(long double));
   
   return 0;
}

//Out put:
/*
Storage size of char:			      1 Byte
Storage size of unsigned char:		1 Byte
Storage size of signed char:		   1 Byte
Storage size of int:			         4 Bytes
Storage size of unsigned int:		   4 Bytes
Storage size of short:			      2 Bytes
Storage size of unsigned short:		2 Bytes
Storage size of long:			      8 Bytes
Storage size of unsigned long:		8 Bytes
Storage size of float:			      4 Bytes
Storage size of double:			      8 Bytes
Storage size of long double:		   16 Bytes

*/
