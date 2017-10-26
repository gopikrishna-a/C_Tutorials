#program to compare two values

#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter a value: ");
	scanf("%d",&a);
	printf("Enter b value: ");
	scanf("%d",&b);

	if (a == b)
	{
		printf("a and b are equal!!\n");
	}
	else
	{
		printf("a and b are not equal!!\n");

	}
	return 0;
}
