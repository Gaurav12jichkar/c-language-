#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	char city;
	printf("enter your age");
	scanf("%d%",&age);
	printf("enter your contry name");
	scanf("%c",&city);
	if(age>=18 && city=='i')
	{
		printf("your are eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}
}
