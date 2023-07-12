#include<stdio.h>
int main()
{
	int num,value,digit,amstrong=0;
	printf("Enter the number");
	scanf("%d",&num);
	value=num;
	while(num!=0)
{

	
	digit=num%10;
	amstrong=(amstrong)+(digit*digit*digit);
	num=num/10;
    }

	if(amstrong==value)
	{
		printf("%d is an amstrong number",amstrong);
	}
	else 	printf("%d is not an amstrong number",amstrong);
}
