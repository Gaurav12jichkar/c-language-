#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,k; 
	do
	{
		int j=1;
		do
		{
		k=i*j;
		printf("\n\t %d",k);
		printf("\t");
		j++;
		}while(j<=10);
		
		printf("\t\n\t");
		i++;
		printf("\t");
		
		
	}while(i<=30);
	
}
