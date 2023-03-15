#include<stdio.h>
int main()
{
	int i;
	int a[8]={2,45,66,345,45,78,64,};
	for(i=0;i<8;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d is even",a[i]);
		}
		else
		{
			printf("\n%d is odd",a[i]);
		}
	}
	
}
