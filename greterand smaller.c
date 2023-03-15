#include<stdio.h>
int main()
{
	int a,b,n,i,c=0;
	printf("enter the two number to greater and smaller");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf(" %d is greter",a);
	}
	else
	{
		printf("%d is greter",b);
	}
	printf("\n enter the greater number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("its prime number");
	}
	else
	{
		printf("its not a prime number");
	}
}
