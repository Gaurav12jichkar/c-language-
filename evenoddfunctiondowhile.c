#include<stdio.h>
int isEven(int n)
{
     if(n%2==0)
          return 10;
     else
          return 30;
}
int main()
{
     int num,ans,i,z;
     printf("/write the number : ");
    scanf("%d",&z);
     i=1;
     do
     {
  
          printf("\nEnter Number-%d : ",i);
          scanf("%d",&num);
          ans=isEven(num);
          if(ans==10)
               printf("%d is Even\n",num);
          if(ans==30)
               printf("%d is Odd\n",num);
                  	i++;
     }while(i<=z);
     return 0;
}
