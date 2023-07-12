#include<stdio.h>
int factorial(int num)
{
	int fact=1;
	for(int i=num;i>=1;i--)
	{
		fact=fact*i;
	}
	return printf("The factorial of %d is %d",num,fact);
}
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	factorial(n);
}
