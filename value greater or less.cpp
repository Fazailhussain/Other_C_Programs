#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the numbers\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("The greater number is %d");
	}
	else printf("The greater number is %d",num2);
}
