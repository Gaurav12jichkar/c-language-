#include<stdio.h>
#include<string.h>
struct college 
{
	int id;
	char name[30];
}c1;

int main()
{
c1.id=100;
 strcpy(c1.name,"gaurav jichkar");
printf("student data1:%d\n",c1.id);
printf("student data1:%s\n",c1.name);	
}

