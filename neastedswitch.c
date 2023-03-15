#include<stdio.h>
#include<conio.h>
void main()
{
	int number,range;
	printf("enter your range");
	scanf("%d",&range);
	printf("enter your number");
	scanf("%d",&number);
	switch(range)
	{
		case 100:
			switch(number)
			{
				case 10:
					printf("10 is available");
					break;
						case 20:
					printf("20 is available");
					break;
					
					
			}
			case 200:
			switch(number)
			{
				case 120:
					printf("120 is available");
					break;
						case 140:
					printf("140 is available");
					break;
					
			}
	}
}
