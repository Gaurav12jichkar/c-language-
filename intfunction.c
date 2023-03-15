#include<stdio.h>
#include<conio.h>
int add();
int main()
{   
    int result;
	printf("addition is performed");
	result =add();
	printf("%d",result);
}
int add()
{
	int a,b;
	printf("enter any two number ");
	scanf("%d%d",&a,&b);
	
   return a+b;	
}
