//no argument no return value//
//#include<stdio.h>
//void product();
//void main()
//{
//	product();//no arugment
//	
//}
//void product()
//{
//	int a=3,b=10,c;
//	c=a*b;
//	printf("%d",c);
//}
//argument with no return value//


//#include<stdio.h>
//void product(int a,int b);
//main()
//{
//	int a=5,b=10;
//	product(a,b);//---->with argument.
//	
//}
//void product(int a,int b)
//{
//	int c;
//	c=a*b;
//	printf("the product is=%d",c);//no return value
//}
//no argument with return value//
//#include<stdio.h>
//int product();
//int main()
//{
//	printf("product of two number=%d", product());
//}
//int product()
//{
//	int a=5,b=9,c;
//	c=a*b;
//	return c;
//}
//function with argument with return value//
#include<stdio.h>
int product(int a,int b);//----->argument
int main()
{
	int a=5,b=5,c;
	printf("product of two number=%d",product(a,b));//----->with argument.
}
int product(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
