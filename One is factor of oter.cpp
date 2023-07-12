#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the numbers");
	scanf("%d%d",&num1,&num2);
	if(num1%num2==0)
	{
		printf("%d is the factor of %d",num1,num2);
	}
}
