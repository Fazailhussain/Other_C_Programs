#include<stdio.h>
int main()
{
	int num,fact=1;
	printf("Enter the number of which you want to find factorial");
	scanf("%d",&num);
	for(int i=num;i>=1;i--)
	{
	    fact=fact*i;
		printf(" %d",i);
	}	
	printf("\nFactorial of %d is = %d",num,fact);
}
