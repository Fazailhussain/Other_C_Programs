#include<stdio.h>
int main()
{
	int lines;
	printf("Enter the number of lines");
    scanf("%d",&lines);
    for(int i=1;i<=lines;i++)
    {
    	for(int j=1;j<=i;j++)
    	{
    		if((i+j)%2==0)
    		{
    			printf("1");
			}
			else printf("0");
		}
		printf("\n");
	}
}
