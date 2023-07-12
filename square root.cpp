#include<stdio.h>
#include<math.h>
float square_root(float num)
{
	return sqrt(num);
}
int main()
{
	int n1;
	printf("Enter the number");
	scanf("%d",&n1);
	square_root(n1);
	printf("The square root of %d is %f",n1,square_root(n1));
}
