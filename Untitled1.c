#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,cal;
	printf("1.+");
	printf("2.-");
	printf("3.*");
	printf("4./");
	
	scanf("%d",&cal);
	
	printf("\nEnter the value of a and b");
	scanf("%d%d",&a,&b);
	switch(cal)
	{
		case 1:
			c=a+b;
			printf("addition=%d" ,c);
			
            	break;
	      case 2:
	      	c=a-b;
	      	printf("subtraction=%d",c);
	      	
			   break;
	      case 3:
	      	c=a*b;
			printf("multiplication=%d",c);

	      break;
	      case 4:
	      	c=a/b;
	      	printf("division=%d",c);
	      	
				
	      break;
	      default:
	      	printf("error");
	      	
	      
	}
}
