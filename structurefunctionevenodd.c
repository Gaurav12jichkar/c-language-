#include<stdio.h>
int evenodd(int a);
struct evenodd{
	int a;
}a1;
int main()
{ 
int ans;
printf("enter the value of a");
scanf("%d",&a1.a);
ans=evenodd(a1.a);
if(ans==1)
{
	printf("value is even");
}
else
{
printf("value is odd");	
}
}
int evenodd(int a)
{
	if(a%2==0)
	{
		return 1;
	}
	else{
		return 2;
	}
}
