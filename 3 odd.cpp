/* write a program to calculate sum of first N odd natural number */
#include<stdio.h>
int main()
{
	int n, i;
	printf("enter  numbers");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
	  printf("%d",2*i-1);
	}
	
	
	return 0;
}
