#include<stdio.h>
int main()
{
	float weight,height,BMI,feet;
	printf("Enter the weight in kg\n");
	scanf("%f",&weight);
	printf("Enter the height in meter\n");
	scanf("%f",&height);
	BMI=weight/(height*height);
	printf("Your BMI is %f",BMI);

	if(BMI<18.5)
	{
	printf("\nUnderweight");
}
	else if(BMI>=18.5&&BMI<24.9)
{
		printf("\nNormal Weight");
}
	else if(BMI>=24.9&&BMI<29.9)
{
		printf("\nOverWeight");
}
    else if(BMI>=29.9&&BMI<34.9)
{
		printf("\nObesity class 1");
}
	else if(BMI>=34.9&&BMI<39.9)
{
		printf("\nObesity class 2");
}
	else if(BMI>39.9)
{
		printf("\nExtreme obesity");
}
}
