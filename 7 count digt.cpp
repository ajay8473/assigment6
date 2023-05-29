/* write program to count digit in given number */
#include<stdio.h>
int main()
{
	
	int count =0,x;
	printf("enter a number");
	scanf("%d",&x);
	
	while(x!=0){
		x=x/10;
		count ++;
	}
	printf("total digits =%d",count);
	return 0;
	
}
  
