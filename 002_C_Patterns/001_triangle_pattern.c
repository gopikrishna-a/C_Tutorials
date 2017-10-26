#include <stdio.h>

int main()
{

	int num;
	printf("Enter number of rows of the triangle: ");
	scanf("%d",&num);
	int i;
	int j;
	for (i = 1;i<num+1;i++)
	{
		for (j = 0; j < i ; j++ )
		{
			printf("#");
		}
		printf("\n");
	}

	return 0;
}


//input: 8 

/*
Out Put: 

#
##
###
####
#####
######
#######
########
*/
