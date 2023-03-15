#include<stdio.h>
int evenodd(int num);

int main()
{
		int i=6,j,ans,k,num;
		
		
	for(j=1;j<=10;j++)
		{
			k=i*j;
			printf("\n\t %d",k);
			
          ans=evenodd(k);
          if(ans==1)
               printf("%d is Even\n",num);
          if(ans==2)
               printf("%d is Odd\n",num);
			
		}
		
}
evenodd(int num)
{

	
if(num%2==0)
{
	return 1;
		}
else
{
	return 2;
}

}
