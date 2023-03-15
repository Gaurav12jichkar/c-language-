#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	printf("enter the value of i");
	scanf("%d",&i);
	printf("enter the value of j");
	scanf("%d",&j);


	
	while(i<=10)
	{
		
		while(j<=10)
		{
			k=i*j;
			j++;
			printf("\t %d",k);
		}
		i++;
		printf("\t\n");
	}
}
