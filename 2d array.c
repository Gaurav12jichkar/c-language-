#include<stdio.h>
int main()
{
	int  i,j;
	
	int a[3][3];
	printf("enter the array value");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				scanf("\n%d",&a[i][j]);
			}	
	}
	printf("2d array");
	for(i=0;i<3;i++)
		{
		for(j=0;i<3;j++)
		{
		printf("a[%d][%d]=%d\n",i,j,a[i][j]);

}
}
}

