#include<stdio.h>
int main()
{
	int lines;
	printf("Enter the number of lines");
    scanf("%d",&lines);
    for(int i=lines;i>=1;i--)
    {
    	for(int j=0;j<lines-i;j++)
    	{
    		printf(" ");
    	}
    		for(int k=2*i-1;k>=1;k--)
    		{
    			printf("*");
			}
    	
		
		printf("\n");
	
   }
}
