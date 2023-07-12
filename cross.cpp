#include<stdio.h>
int main()
{
	int lines;
	printf("Enter the number of lines");
    scanf("%d",&lines);
for(int i=lines-1;i>=1;i--)
    {
    	for(int j=0;j<=lines-i;j++)
    	{
    		printf(" ");
    	}
    		for(int k=2*i-1;k>=1;k--)
    		{
    			if(k==1||k==2*i-1)
    		{
				printf("*");
			}
			else printf(" ");
			}
    	
		
		printf("\n");
	
   }
    for(int i=2;i<=lines;i++)
    {
    	for(int j=lines-i;j>=0;j--)
    	{
    		printf(" ");
    	}
    		for(int k=1;k<=2*i-1;k++)
    		{
    			if(k==1||k==2*i-1)
    		{
    			printf("*");
    		}
    		else printf(" ");
			}
    	
		
		printf("\n");
	
   }
}
