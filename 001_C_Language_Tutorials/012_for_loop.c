#Number is Even or Odd

#include <stdio.h>

int main()

{
	printf("Enter ur range of number to chack even or odd: ");
	int num;
	scanf("%d",&num);
	int i;

	for(i = 0;i <=num; i++)
	{
		if (i % 2 == 0)
		{
			printf("number %d is Even!!\n", i);

		}
		else
		{
			printf("Number %d is Odd!!\n", i);
		}

	}

	return 0;
}
