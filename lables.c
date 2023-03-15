#include<stdio.h>
#include<string.h>
void main()
{
	int i,num,num1,age,weight;
char country ;
   
			
blooddonation:
	
	printf("\nenter your age");
   scanf("%d",&age);
   
   printf("eligible");
   if(age<18)
	{
		
	printf("\nenter your currect age");
	goto blooddonation; 
		}	
				
voting:

	printf("\nenter the country name");
	scanf("%s",&country);
	printf("\nenter your age");
   scanf("%d",&age);
   
	
	if((country=='a') &&(age<18))
	{
	printf(" not eligible for voting");
		goto voting;
			
	}
	else{
		printf(" eligible for voting");
			}
	even:
			printf("\nenter the number");
	scanf("%d",&num);
		
		if(num%2==0)
		{
			printf("the number is even");
			//goto even;
		}
					
				
}
