#include<stdio.h>
int main()
{
	int lines;
	printf("Enter the number of lines");
    scanf("%d",&lines);
    for(int i=1;i<=lines;i++)
    {
    	for(int j=lines-i;j>=0;j--)
    	{
    		printf(" ");
    	}
    		for(int k=1;k<=2*i-1;k++)
    		{
    			printf("%d",k);
			}
    	
		
		printf("\n");
	
   }
}
