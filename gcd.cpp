#include <stdio.h>

int main() 
{
    int n1,n2,gcd,lcm;
    printf("Enter the two numbers for which you find gcd and lcm");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
    	for(int i=1;i<=n1;i++)
    	{
    		if(n1%i==0&&n2%i==0)
    		gcd=i;
		}
	}
	if(n2>n1)
    {
    	for(int i=1;i<=n2;i++)
    	{
    		if(n1%i==0&&n2%i==0)
    		gcd=i;
		}
	}
	lcm=(n1*n2)/gcd;
	printf("The gcd of %d and %d is %d and lcm of %d and %d is %d",n1,n2,gcd,n1,n2,lcm);
}
