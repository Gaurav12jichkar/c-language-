#include<stdio.h>
#include<conio.h>
int voting();
int sum();
int sub();
int mul();
int div();
int blooddonation();


int main()
{
	 sum();
	voting();
  
	sub();
	mul();
	div();
 blooddonation();
}
 
 
int sum()
{
	int a,b;
	printf("\nenter any two number for addition ");
	scanf("%d%d",&a,&b);
	printf("\nthe addition =%d",a+b);

	
}
int sub()
{
	int a,b;
	printf("\nenter any two number for subtraction");
	scanf("%d%d",&a,&b);
	printf("the subtraction =%d",a-b);
}
int mul()
{
	int a,b;
	printf("\n enter any two number for multiplication");
	scanf("%d%d",&a,&b);
	printf("the multiplication =%d",a*b);

}
int div()
{

int a,b;
printf("\n enter the division of two number for division");
scanf("%d%d",&a,&b);
printf("the division =%d",a/b);

}
int blooddonation()
{
	int age,weight;
	printf("\nenter your age:");
	scanf("%d",&age);
	printf("\nenter your weight:");
	scanf("%d",&weight);
	if((age>=18 && age<=60)&&(weight>=50 && weight<=80))
	{
		printf("your eligible for blood donation");
		
	}
	else
	{
		printf("your are not eligible for blood donation");
	}
}
int voting()
{
	int age;
	char ch;
	printf("\nenter your country name");
	scanf("%c",&ch);
	printf("\nenter your age");
	scanf("%d",&age);
	
	if((age>18)&&(ch=='i'))
	{
		printf("your eligible for voting");
	}
	else
	{
			printf("your not eligible for voting");
	}
}
	


