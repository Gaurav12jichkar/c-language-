#include<stdio.h>
void main()
{
	int num,rem,mul=1;
	printf("enter the number ");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		num/=10;
		mul*=rem ;
		
	
	}
	printf("multiplication of number=%d",mul);
}
