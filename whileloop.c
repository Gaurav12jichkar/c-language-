#include<stdio.h>
#include<conio.h>
void main()
{
	int number,count;
	printf("enter the number you want");
	scanf("%d",&number);
	while(number>0)
	{
		number=number/10;
		++count;
	}
	printf("%d",count);
}
