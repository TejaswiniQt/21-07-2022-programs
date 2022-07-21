/******** C program to print the below pattern

 e
 d d
 c c c 
 b b b b 
 a a a a a

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num,k=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(j=i;j<=num;j++)
		{
				printf("%c ",96+i);
		}
		printf("\n");
	}
	return 0;
}

