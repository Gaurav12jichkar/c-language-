#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{	
	int age,weight,kidney,working;
	char gender[8], hiv[4],bp[5];
	printf("enter your age");
	scanf("%d",&age);
	printf("enter your weight");
	scanf("%d",&weight);
	printf("enter your gender");
	scanf("%s",&gender);
	printf("are you suffering from any disease");
	scanf("%s%s",&bp,&hiv);
	
if((age>=18) && (age<=60))
{
	printf("your eligible for blood donation");
		}
	else if(weight>=60 && (!strcmp(gender,"male")) || (!strcmp(gender,"female")))
	{
		printf("your eligible for blood donation");
	}
	
	else if((kidney==working)||(!strcmp(bp,"no")) || (!strcmp (hiv,"no"))) 
	{
		printf("your eligible for blood donation");
	}

	else
	{
		printf("your not eligible for blood donation");
	}
}





 
