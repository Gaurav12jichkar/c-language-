#include<stdio.h>
int main()
{
	int a[15],i,j,num;
	printf("enter the decimal number");
	scanf("%d",&num);
	for(i=0;num>0;++i)
	{
		a[i]=num%2;
		num/2;
}
	printf("the binary number is");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}

}
