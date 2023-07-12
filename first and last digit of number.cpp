#include <stdio.h>

int main() 
{
    int n,count=0,fdigit,ldigit,value,num,reverse=0;
    printf("Enter the number");
    scanf("%d",&n);
    value=n;
    num=n;
    for(int i=1;i<=100;i++)
   {
   	int digit;
	digit=n%10;
	count++;
	n=n/10;
    reverse=(reverse*10)+digit;
    if(n==0)
    break;
}
   for(int j=1;j<=count+1;j++)
   {
   	if(j==1)
   	{
	ldigit=value%10;
    }
   	value=value/10;
   }
   for(int k=1;k<=count;k++)
   {
   	if(k==1)
   	{
   		fdigit=reverse%10;
   	}
   }
printf("%d is first and %d is last digit of %d",fdigit,ldigit,num);
}
