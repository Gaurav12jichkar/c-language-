#include<stdio.h>
int main()
{
	int n=10;
  int *k=&n;
	printf("\nvalue of n=%d",n);
	printf("\nvalue of *k= %d",*k);
	printf("\nadress of &n=%u",&n);
	printf("\nadress of *K=%u",&k);
	printf("\naddress of *k= %u",&(*k));
}
