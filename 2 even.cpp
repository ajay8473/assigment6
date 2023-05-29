/* write a program to calculate sum of first N even natural number */
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter n even number");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		printf("%d ",2*i);
	}
	return 0;
}
