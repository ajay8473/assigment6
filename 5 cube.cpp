/* write a program to calculate sum of cubes of first n natural numbers*/
#include<stdio.h>
int main()
{
	int i,n;
	int sum =0;
	printf("enetr a number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		
		sum=sum+(i*i*i);
	}
	printf("%d",sum);
	return 0;
}
