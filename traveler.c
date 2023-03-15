#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	char travel[7];
	printf("enter your age");
	scanf("%d",&age);
	printf("vehical  used for  travel");
	scanf("%s",&travel);
  if(age<=5 &&(!strcmp(travel,"bus")))
  {
  	printf("your ticket price is 10");
  }
   else if(age>=6 && age<=59 &&(!strcmp(travel,"bus")))
  {
  	printf("your ticket price is  60");
}
else if(age>=60 && (!strcmp(travel,"bus")))
  {
  	printf("your ticket price is  30");
}
else if(age<=5 &&(!strcmp(travel,"car")))
  {
  	printf("your ticket price is 50");
  }
   else if(age>=6 && age<=59 &&(!strcmp(travel,"car")))
  { 
  	printf("your ticket price is  100");
}
else if(age>=60 && (!strcmp(travel,"car")))
  {
  	printf("your ticket price is  150");
}
else if(age<=5 &&(!strcmp(travel,"ato")))
  {
  	printf("your ticket price is 5");
  }
   else if(age>=6 && age<=59 &&(!strcmp(travel,"ato")))
  {
  	printf("your ticket price is  120");
}
else if(age>=60 && (!strcmp(travel,"ato")))
  {
  	printf("your ticket price is  90");
}
else{
	printf("traveler is student or employee they travel with pass.");
}
}


