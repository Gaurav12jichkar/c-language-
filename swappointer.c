#include<stdio.h>
int main()
{
	int a=4,b=7,temp;
	int *p1,*p2;

	temp=a;
	a=b;
	b=temp;
	printf("value of a and b is:%d%d",*p1,*p2);

}

