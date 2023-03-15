#include<stdio.h>
int sum(int a ,int b);
int sub(int a ,int b);
int mul(int a ,int b);
int div(int a ,int b);
int posneg(int num);
int main()
{
	int a,b,c,num=0,ans;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("\nthe addition is=%d",sum(a,b));
	printf("\nthe subtraction is=%d",sub(a,b));
	printf("\nthe multiplication is=%d",mul(a,b));
	printf("\nthe divsion is=%d",div(a,b));
	 ans=posneg(c);
          if(ans==1)
               printf("\n%d is postive",num);
          if(ans==2)
               printf("\n%d is negative",num);
}
int sum(a,b)
{
	int c;
	c=a+b;
	return c;
}
int sub(a,b)
{
	int c;
	c=a-b;
	return c;
}
int mul(a,b)
{
	int c;
	c=a*b;
	return c;
}
int div(a,b)
{
	int c;
	c=a/b;
	return c;
}
int posneg(int num)
{
	if(num>=0)
	
		return 1;
	
	else 
	
		return 2;
	
}
