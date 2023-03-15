#include<stdio.h>
int main()
{
	int i,j,result,n[9]={10,20,50,90,100,120,5,2,3};
	for(i=0;i<9;i++)
	{ 
	for(j=8;j<9;j++)
	{ 
	 if(n[i]<n[j])
	{
	
		result=n[i];
		n[i]=n[j];
		n[j]=result;
	}
	} 
	}
	printf("assending array is");
	for(i=0;i<10;i++)
	{
		printf("\n%d",n[i]);
	}
}
