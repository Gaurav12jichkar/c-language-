#include<stdio.h>
#include<conio.h>
void main()
{
	int month,year ,day;
	printf("enter the year");
	scanf("%d",&year);
	printf("enter the months");
	scanf("%d", &month);
	switch(year)
	{
		case 111:
			switch(month)
			{
			
	case 1:
	printf("january");
	break;
	case 2:
	printf("feb");
	break;
	case 3:
	printf("march");
	case 4:
	printf("april");
	break;
	case 5:
	printf("may");
	break;
	case 6:
	printf("june");
	break;
	case 7:
	printf("july");
	break;
    case 8:
    printf("augest");
	break;
	case 9:
    printf("septamber");
	break;
    case 10:
	printf("octomber");
	break;
	case 11:
	printf("november");
	break;
	case 12:
	printf("december");
	break;
	default:
	printf("nothing print");
	break;
}
break;

	}
	
}
