#include<stdio.h>
void main()
{
	int num,m1,sum=0;
	printf("enter the number ");
	scanf("%d",&num);
	for(m1=2;m1<=20;m1+=2){
	printf("\n number=%d",m1);
	if(m1 %2==0)
	{
		sum+=m1;
		printf("addition is%d",sum);
	}
}
	

	
}
