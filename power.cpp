#include<stdio.h>
int power(int base,int exponent)
{
	int mul = 1;
	for(int i=1;i<=exponent;i++)
	{
		mul=mul*base;
	}
	return printf("The result of %d power %d is %d",base,exponent,mul);
}
int main()
{
	int n1,n2;
	printf("Enter two numbers");
	scanf("%d%d",&n1,&n2);
	power(n1,n2);
}

