#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,num;
	printf("enter number whose table you want to print");
	scanf("%d",&num);
	table:
		printf("\n%d*%d=%d",num,i,num*i);
		i++;
		if(i<=10)
		{
			goto table;
		}
}
