//#include<stdio.h>
//int main()
//{
//	int age=30;
//	int sal=150000;
//	printf("enter address of age=%u",&age);
//	printf("enter the address of salary=%u",&sal);
//}
#include<stdio.h>
int main()
{
	int a=87;
	int *p=&a;
	printf("address of a=%u\n",&a);
	printf("adress of p=%u\n",&p);
	printf("value of p=%d\n",p);
	printf("value of a=%d\n",a);
	printf("value of *p=%d\n",*p);
	printf("address of a=%u\n",*(&a));
	
}
