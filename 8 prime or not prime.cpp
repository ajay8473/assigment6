/* write a program to check whether a given number is prime or not prime */
#include<stdio.h>
int main()
{
	
	int n, f = 0, i;
	printf("enter a number");
	scanf("%d",&n);
	
	
	for (i =2; i<n ; i++)
	{
		if(n%i ==0)
		{
		f = 1;
		break;	
		}
	}
	
	if(f==0)
	  printf("prime");
	  else
	     printf("not prime");
	
   return 0;
}
