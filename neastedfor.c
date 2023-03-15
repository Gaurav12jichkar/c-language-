#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j,k;
	
	for(i=100;i>=1;i--)
	{
		for(j=100;j<=1;j--)
		{
			k=i*j;
			printf("\t %d",k);
		}
		printf("\t\n");
	}
}
