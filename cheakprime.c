#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("enter the no you want to cheak");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
		c++;
		
		}
	}
	 if(c==2)
	{
		printf("\n is prime number");
	}
	else{
		printf("\n is not prime number");
	}
}
