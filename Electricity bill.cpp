#include<stdio.h>
int main()
{
	float unit,price,bill;

	printf("Enter the consumed unit\n");
	scanf("%f",&unit);

	if(unit>=1&&unit<=199)
	{
	price=unit*1.20;
    }
    if(unit>=200&&unit<=400)
    {
	price=unit*1.50;
    }
    if(unit>=401&&unit<=600)
    {
	price=unit*1.80;
    }
    if(unit>=601)
    {
	price=unit*2.00;
    }
    printf("\nYour current bill is %f",price);
    if(price>=400)
    {printf("\nAs your bill exceeds 400 so 15 percent will be surcharged"); 
	bill=price+(price*0.15);
    printf("\nYour current bill with surcharge is %f",bill);
	}
}
