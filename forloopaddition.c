#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,num,rem;
	printf("enter the number");
	scanf("%d",&num);
	for(num;num>0;){
		rem=num%10;
		num/=10;
		sum+=rem;
		
		
	}
	printf("addition of number is%d",sum);
}
