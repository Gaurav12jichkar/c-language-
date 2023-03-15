#include<stdio.h>
#include<conio.h>
void add();
int main()
{
	printf("addition is performed");
	add();
}
void add()
{
	int a,b;
	printf("enter any two number ");
	scanf("%d%d",&a,&b);
	printf("the addition =%d",a+b);
	
}
