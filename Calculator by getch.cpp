#include<stdio.h>
#include<conio.h>
int main()
{
	float n1,n2,result;
	char ch;
	printf("Enter first number=");
	scanf("\n%f",&n1);
	printf("Enter the operator:");
	ch=getch();
	printf("\nEnter second number=");
	scanf("\n%f",&n2);
	switch(ch)
	{
		case '+':
		result=n1+n2;
		break;
		case '-':
		result=n1-n2;
		break;
		case '*':
		result=n1*n2;
		break;
		case '/':
		if(n2==0)
		{
			printf("Error : Division of zero is not allowed");
		}
		else result=n1/n2;
		break;
	
	default:
	
			
	printf("Syntax Error:You give wrong input");
		break;
}
printf("\n%f",result);
}
