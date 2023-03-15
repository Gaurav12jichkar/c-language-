#include<stdio.h>
void main()
{
	int  i,j;
	
	int a[3][3];
//	printf("enter the array value\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				printf("enter a[%d][%d]:",i,j);
				scanf("\n%d",&a[i][j]);
			}	
	}
	printf("2d array");
	for(i=0;i<3;i++)
		{
		for(j=0;i<3;j++)
		{
		printf("%d\t",a[i][j]);

}
}
}

