#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter any three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greater",a);
		
	}
	if(b>a && b>c)
	{
		printf("%d is grater",b);
	}
	if(c>a && c>b)
	{
		printf("%d is greater",c);
		
	}
}
