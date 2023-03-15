#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j=1,k;
	while(i<=10)
	{
		while(j<=10)
		{
			j++;
			k=i*j;
			printf("\n%d",k);
		}
		i++;
		printf("");
	}
}
