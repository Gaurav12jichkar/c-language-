#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j,k;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=20;j++)
		{
			k=i*j;
			
			printf("\t %d",k);
			printf("\n");
		}
		printf("\t\n");
	}
}
