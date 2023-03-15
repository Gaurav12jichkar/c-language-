#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main()
{
	int a,b,c;
	printf("enter the value of a amd b");
	scanf("%d%d",&a,&b);
	printf("sum of two number=%d",sum(a,b));
	printf("subtraction of two number=%d",sub(a,b));
	printf("multiplication of two number=%d",mul(a,b));
	printf("divison of two number is=%d",div(a,b));
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}
int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
int div(int a,int b)
{
	int c;
	c=a/b;
	return c;
}

