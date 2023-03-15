#include<stdio.h>
void main()
{
	int num,rem,sum;
	printf("enter the number");
	scanf("%d",&num);
	for(num;num>0;)
	{
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("the addition is%d",sum);
}
