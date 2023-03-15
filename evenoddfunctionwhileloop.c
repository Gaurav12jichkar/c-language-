#include<stdio.h>
int isEven(int n);

int main()
{
     int num,ans,i,z;
     printf("/How Many Numbers You \nWant to Check EVEN or ODD/\n\nEnter Limit : ");
    scanf("%d",&z);
    i=1;
     while(i<=z)
     {
          printf("\nEnter Number-%d : ",i);
          scanf("%d",&num);
          ans=isEven(num);
          if(ans==1)
               printf("%d is Even\n",num);
          if(ans==0)
               printf("%d is Odd\n",num);
               i++;
     }
     return 0;
}
int isEven(int n)
{
     if(n%2==0)
          return 1;
     else
          return 0;
}
