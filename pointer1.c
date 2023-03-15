#include<stdio.h>
int main()
{
int a=50;
int *p;
p=&a;
printf("adrees=%u",&p);
*p=*p+20;
printf("the addition is =%d",*p);
p=*p+p;
printf("adrees=%u",p);
}
