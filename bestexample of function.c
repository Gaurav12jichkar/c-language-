//function with no argument and no return value
#include<stdio.h>
void product();
int main()
{
	product();
	
}
void product(){
	int a, b,c;
	printf("enter the value of a and b");
	scanf("%d",&a,&b);
	c=a*b;
	printf("=%d",c);
	
}
