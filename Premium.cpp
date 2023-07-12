#include<stdio.h>
int main()
{
	int age,premium;
	int health;
	int sex;
    printf("\nEnter the age of person");
	scanf("%d",&age);
	printf("Enter the health");
	scanf("%d",&health);
	printf("Enter the sex");
	scanf("%d",&sex);
	if((age>=25&&age<=35)&&sex=='M'&&health=='g')
	{
		printf("Premium is 4 R.S per thousand");
	}
}
