#include<stdio.h>
int main()
{
	int range[10],i,a;
	printf("enter the range");
	scanf("%d",&range[10]);
	printf("enter the array value");

	for(i=1;i<=range[10];i++)
	{
			scanf("%d",&range[i]);
	
		if(range[i]==1)
		{
			printf("\nthe position is 0");
		}
		else if(range[i]==2)
		{
			printf("\nthe postion is 1");
		}
		else if(range[i]==3)
		{
			printf("\nthe postion is 2");
		}
	else if(range[i]==4)
		{
			printf("\nthe postion is 3");
	}
		else if(range[i]==5)
		{
		printf("\nthe postion is 4");
    
}   
	}
}
