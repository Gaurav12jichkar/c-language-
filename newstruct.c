#include<stdio.h>
struct gaurav{
	char city[20];
	char name[10];
	int phone;
};
struct id{
	char school[20];
	struct gaurav g;
};
int main(){
	
	struct id i1;
	printf("gaurav details");
	scanf("%s %s %d %s",i1.school,i1.g.city,&i1.g.phone,i1.g.name);
	printf("student id");
	printf("\n school:%s\ncity:%s\nphone:%d\nname:%s",i1.school,i1.g.city,i1.g.phone,i1.g.name);
	return 0;
}


