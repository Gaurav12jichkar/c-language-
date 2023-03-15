#include<stdio.h>
#include<conio.h>
void main()
{
	int number,count;
	printf("enter the number you want");
	scanf("%d",&number);
	for(number;number>0;++count)
	{
	number=number/10;
	}
	printf("%d",count);
}
