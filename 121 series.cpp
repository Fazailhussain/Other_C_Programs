#include<stdio.h>
int main()
{
	int num;
	printf("Enter the num of rows");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num-i;j++)
		{
			printf(" ");
		int k=1;
		if(j>=num-i)
		printf("%d",k);
		
}
