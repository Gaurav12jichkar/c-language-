#include<stdio.h>
int main()
{
	int a=5;
	 int *p;
	 int **p2;
	 p=&a;
	 p2=&p;
	 printf("\nadress of a:%x",&a);
	 printf("\nadress of p:%x",p);
	 printf("\nadress of p2:%x",p2);
	 printf("\nvalue of a:%d",a);
	 printf("\nvalue of *p:%d",*p);
	 printf("\nvalue of *p2:%d",**p2);
}
