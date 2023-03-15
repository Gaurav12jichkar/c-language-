#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

	char car,carname;
	printf("enter your car company");
	scanf("%c",&car);
	printf("enter your car name");
	scanf("%c",&carname);
	switch (car)
	{
		case 'h':
		switch(carname)
		{
		case 'c':
		printf("hondacity");
		break;
		case 'v':
		printf("verna");
		break;
		case 'a':
		printf("amaze");
		break;
		default:
			printf("this is not hondas car");
		}
		break;
		case 'm':
		switch(carname)
		{
		case 's':
		printf("swift");
		break;
		case '8':
		printf("800");
		break;
		case 'a':
		printf("alto");
		break;
			
	}
	break;

}
}
