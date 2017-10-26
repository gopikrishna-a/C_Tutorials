#include <stdio.h>

int main()
{
	int a;
	printf("Enter your marks: ");
	scanf("%d",&a);
	if (a > 0)
	{
		if ((a >=50) && (a <= 100))
		{
			printf("You scored 50 or more than 50 that's great!!!\n");

		}
		else if (a > 100)
		{
			printf("How come you scored more than 100!!!\n");
		}
		else
		{
			printf("You scored less than 50 better luck next time!!!\n");
		}
	}
	else
	{
		printf("How come you scored negative marks!!!\n");
	}
	return 0;
}
