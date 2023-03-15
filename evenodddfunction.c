#include<stdio.h>
 int even_odd();
int main()
{
int n;
   printf("enter you number");
   scanf("%d%d%d%d%d",&n);
 int flag =even_odd();
 if(flag==0)
 {
 	printf("number is odd");
	  }
 else{
 	printf("number is even");
}
int even_odd() 
	{
		int n;
   printf("enter you number");
   scanf("%d%d%d%d%d",&n);
  if(n%2==0)
   {
   	return 1;
   }
   else{
   	return 0;
   }
}
