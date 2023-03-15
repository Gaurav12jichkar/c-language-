#include<stdio.h>
#include<string.h>
struct student{
	char name[30];
	int rollno;
	float marks;
	
}s1,s2,s3;
int main(){
	s1.rollno=2345;
	s1.marks=78.67;
	strcpy(s1.name,"gaurav jichkar");
	printf("rollno:%d\n",s1.rollno);
	printf("marks:%f\n",s1.marks);
	printf("name:%s\n\n",s1.name);
	s2.rollno=234;
	s2.marks=98.67;
	strcpy(s2.name,"lALU YADav");
	printf("rollno:%d\n",s2.rollno);
	printf("marks:%f\n",s2.marks);
	printf("name:%s\n\n",s2.name);
	s3.rollno=3445;
	s3.marks=99.99;
	strcpy(s1.name,"sunder kiii");
	printf("rollno:%d\n",s3.rollno);
	printf("marks:%f\n",s3.marks);
	printf("name:%s\n",s3.name);
}
