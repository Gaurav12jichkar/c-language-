#include<stdio.h>
#include<conio.h>
void main()
{
	int mark;
	printf("enter your marks");
	scanf("%d",&mark);
	if(mark<=100 && mark>=90)
	{
		printf("congratuation you are passed with A grade");
	}
		else if(mark<=90 && mark>=80)
	{
		printf("congratuation you are passed with B grade");
	}
		else if(mark<=80 && mark>=70)
	{
		printf("congratuation you are passed with c grade");
	}
		else if(mark<=70 && mark>=60)
	{
		printf("congratuation you are passed with D grade");
	}
	else if(mark<=40 && mark>=40)
	{
		printf("congratuation you are passed with  E grade ");
	}
	else 
	{
		printf("your failed");
	}
}
