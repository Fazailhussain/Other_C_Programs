#include<stdio.h>
int main()
{
	int num,next=0,first,second;
	printf("Enter first and second number");
	scanf("%d%d",&first,&second);
	printf("Enter the number of terms");
	scanf("%d",&num);
	printf("%d , %d",first,second);
	for(int i=1;i<=num-2;i++)
	{
		next=first+second;
		first=second;
		second=next;
		printf(" , %d",next);
	}
}
