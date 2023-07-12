#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,sum;
	printf("Enter the angles\n");
	scanf("%d",&angle1);
	scanf("%d",&angle2);
	scanf("%d",&angle3);
	printf("The angle you entered are %d , %d , %d",angle1,angle2,angle3);
	sum=angle1+angle2+angle3;
	if(sum!=180)
	{
		printf("\nThe triangle cannot be formed by these values");
	}
	else
	printf("\nThe triangle will be formed by these values");
}
