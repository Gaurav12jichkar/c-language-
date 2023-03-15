#include<stdio.h>
int cal(int a ,int b);
int posneg(int num);
int main()
{
	int a,b,c,num,ans;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("\nthe addition is=%d",cal(a,b));
	
	 ans=posneg(c);
          if(ans==1)
               printf("%d is postive\n",num);
          if(ans==2)
               printf("%d is negative\n",num);
}
int cal(a,b)
{
	int c;
	c=a+b;
	return c;
}
int cal(a,b)
{
	int c;
	c=a-b;
	return c;
}
int cal(a,b)
{
	int c;
	c=a*b;
	return c;
}
int cal(a,b)
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
