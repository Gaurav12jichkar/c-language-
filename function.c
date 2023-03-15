#include<stdio.h>
#include<conio.h>
void sum(int,int);
int main()
{
	int a,b;
	printf("enter no");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
void sum(int a,int b)
{
	printf("addition=%d",a+b);
}
