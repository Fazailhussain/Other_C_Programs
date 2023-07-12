#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num%2!=0)
	{
		printf("The number you entered is odd");
	}
	else printf("The number you entered is even");
}
