#include <stdio.h>

int main()

{
	int num_one;
	int num_two;
	int result;
	printf("Enter number one: ");
	scanf("%d",&num_one);
	printf("Enter number two: ");
	scanf("%d",&num_two);
	result = num_one + num_two;
	printf("result is: %d \n",result);
	return 0;

}
