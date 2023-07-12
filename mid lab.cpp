#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number of rows");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<i;j++)
		{int s=num;
			printf(" ");
		if(j!=num-i)
		printf("%d",s);	
		
		}
		printf("\n");
	}
}

