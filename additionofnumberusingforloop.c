#include<stdio.h>
#include<conio.h>
void main()
{
	int number,sum,rem;
	printf("enter the number you want");
	scanf("%d",&number);
	for(number>0)
	{
		rem=number%10;
		sum+=rem;
	   //rem=rem/10;
	   number/=10;
	   
	}
	printf("sum of number is=%d",sum);
}
