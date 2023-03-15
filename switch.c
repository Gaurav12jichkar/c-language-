#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	printf("enter any number");
	scanf("%d",&number);
	switch(number)
	{
		case 10:
			printf("10 is available");
			break;
			case 20:
			printf("20 is available");
			break;
			case 30:
			printf("30 is available");
			break;
			case 40:
			printf("40 is available");
			break;
			case 50:
			printf("50 is available");
			break;
			default:
				printf("number is not availbale");
	}
}
