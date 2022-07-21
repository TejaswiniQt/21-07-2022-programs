/******** C program to print the below pattern

 a
 a b
 a b c 
 a b c d 
 a b c d e

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num,k=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
				printf("%c ",96+j);
		}
		printf("\n");
	}
	return 0;
}

