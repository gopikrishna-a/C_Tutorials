#include <stdio.h>

int main()
{

	int a;
	printf("Enter any intiger number: ");	
	scanf("%d",&a);

	if (a % 2 == 0){
		printf("the number %d is even\n", a);
	}

	else{
		printf("the number %d is odd\n", a);
	}

	return 0;

}
