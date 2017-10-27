//Comparing Two numbers using functions!!

#include <stdio.h>

int compare_three_nums(int a, int b); //function definition to compare the values

int main()

{
	int a;
	int b;
	int res;
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);


	compare_three_nums(a, b); //Calling function to compare values
	
	printf("Comparision completed!!!\n");
	return 0;

}


int compare_three_nums(int a, int b) //function declaration

{

	if (a > b)

	{
	    printf("a is bigger!!\n");
	}
	    
	else if (b > a)
	{
	    printf("b is bigger!!\n");
	}
	else
	{
		printf("a and b are equal!!\n");
	} 
	    
return 0;

}

