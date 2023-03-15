#include<stdio.h>
#include<conio.h>
void print();//declaration
int main()
{
	int i=1;
	printf("\nthis is variable%d",i);
	print();//function calling
}
void print()//creation
{
	printf("hello i am function\n");
	printf("user defined function");
}
	
