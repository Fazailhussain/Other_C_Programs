#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter the three of which you want combinations");
	scanf("%d%d%d",&n1,&n2,&n3);
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			for(int k=1;k<=3;k++)
			{
				printf("%d %d %d , ",i,j,k);
			}
		}
	}
	
}
