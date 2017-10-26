#include <stdio.h>

int main()
{
	printf("How many times you want to print Hello world!! : ");
	int a;
	scanf("%d",&a);
	while (a > 0)
	{
		printf("Hello world!!\n");
		a--;
	}
	return 0;
}
