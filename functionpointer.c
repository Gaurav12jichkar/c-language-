#include<stdio.h>
int swapping(int *p, int *P2);
int main()
{
int a,b,temp;
	int *p,*p2;
	p=& a;
	p2=&b;
	printf("enter the value of a  and b\n");
	scanf("%d%d",&a,&b);
	printf("the value of a and b is:%d  %d\n",*p,*p2);
	swapping( &a,&b);
	printf("the values after swapping:%d  %d\n",*p,*p2);

}
int swapping(int *p,int *p2)
{
int temp;
	

temp=*p;
*p=*p2;
*p2=temp;

return 0;
}
