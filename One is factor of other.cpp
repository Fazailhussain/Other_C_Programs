#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the numbers");
	scanf("%d%d",&num1,&num2);
	if(num2%num1==0)
	{
		printf("%d is the factor of %d",num1,num2);
	}
	else printf("%d is not a factor of %d",num1,num2);
}
