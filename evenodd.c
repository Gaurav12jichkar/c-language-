#include<stdio.h>
int main()
{
	int a[5]={73,5,2,3,6};
	int i;
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			printf("\nthe number is even=%d",a[i]);
		}
		else{
			printf("\nnumber is odd=%d",a[i]);
		}
	}
}
