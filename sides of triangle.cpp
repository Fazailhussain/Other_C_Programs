#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter the side of triangle");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1>side2&&side1>side3)
	{
		if(side2+side3>side1)
		{
			printf("the triangle is valid");
		}
	else
	
	printf("the triangle is not valid");
}
	if(side2>side1&&side2>side3)
	{
		if(side1+side3>side2)
		{
			printf("the triangle is valid");
		}
	
	else 

	printf("the triangle is not valid");
}
	if(side3>side1&&side3>side2)
	{
		if(side1+side2>side3)
		{
			printf("the triangle is valid");
		}
	
	else printf("the triangle is not valid");
}
}
