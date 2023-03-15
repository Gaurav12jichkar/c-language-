#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char city;
	int age;
	printf("enter your contry name %c",city);
	scanf("%c",&city);
	printf("enter your age %d",age);
	scanf("%d",&age);
	if(age>=18 || city=='i')
	{
		printf("your are eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}
}
