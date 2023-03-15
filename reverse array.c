#include<stdio.h>
int main()
{
	int i,j,result,a[15]={1,2,3,4,5,6,7,8,9,10};
	for((i=0,j=9);(i<j);(i++,j--))
	{
		
	 result=a[i];
	  a[i]=a[j];
	  a[j]=result;
}
	 
   printf("enter the array");
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
	}

}

