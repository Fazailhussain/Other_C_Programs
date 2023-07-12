#include<stdio.h>
int main()
{
	int num1,num2,num3,greater,lesser;
	printf("Enter three numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2&&num1>num3&&num2>num3)
    {
	greater=num1;
	lesser=num3;
	}
	else
	{ 
	lesser=num2;
    }
	if(num2>num1&&num2>num3&&num1>num3)
	{
	greater=num2;
	lesser=num3;
	}
	else 
	{
	lesser=num1;
    }
	if(num3>num1&&num3>num2&&num2>num1)
	{
	greater=num3;
	lesser=num1;
	}
	else 
	{
	lesser=num2;
    }
	printf("%d is greater and %d is smallest",greater,lesser);
}
