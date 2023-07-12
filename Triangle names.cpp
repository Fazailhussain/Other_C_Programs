#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c&&c==a)
	{
    	printf("This triangle is equilateral");
	}
	else if(a==b||b==c||c==a)
	{
		printf("This triangle is isosceles");
	}
	if(a!=b&&b!=c&&a!=c)
	{
		printf("This triangle is scalene");
	}
}
