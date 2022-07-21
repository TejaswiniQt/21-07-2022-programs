/******** C program to print the below pattern

 a
 b b
 c c c 
 d d d d 
 e e e e e

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
				printf("%c ",96+i);
		}
		printf("\n");
	}
	return 0;
}

