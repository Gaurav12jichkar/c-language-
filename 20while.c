#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,k;
	while(i<=10)
	{
		int j=1;
		while(j<=10)
		{
			k=i*j;
			j++;
			printf(" \t %d ",k);
		
		}
		i++;
		printf("\t\n ");
	}
}
