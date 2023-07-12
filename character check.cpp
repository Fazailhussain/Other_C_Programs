#include<stdio.h>
int main()
{
	char a;
	printf("Enter the character");
	scanf("%c",&a);
	printf("The ASCII value of character %c is %d",a,a);
	if(a>=65&&a<=90)
	{
		printf("\nIt is capital alphabet");
	}
    if(a>=97&&a<=122)
    {printf("\nIt is small alphabet");
	}
	if(a>=48&&a<=57)
	{
		printf("\nIt is digit");
	}
	if(a>=0&&a<=47||a>=91&&a<=96||a>=123&&a<=256)
	{printf("\nIt is special character");
	}
}
