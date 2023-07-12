#include<stdio.h>
int main()
{
	int days_late;
	float fine;
	printf("Enter the days which the customer is late");
	scanf("%d",&days_late);
	if(days_late>1&&days_late<=5)
	{
	fine=0.5;
	printf("Your fine is %f rupees",fine);
    }
    if(days_late>=6&&days_late<=10)
    {
	fine=1;
	printf("Your fine is %f rupees",fine);
    }
    if(days_late>10&&days_late<=30)
    {
	fine=5;
	printf("Your fine is %f rupees",fine);
    }
    if(days_late>30)
    {
    	printf("your membership has been");
	}
}
