#include <stdio.h>

int main() 
{
    int n1,n2,max,lcm;
    printf("Enter the two numbers for which you find lcm");
    scanf("%d%d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    int i=1;
    while(i<=max)
	{
	if(max%n1==0&&max%n2==0)
	{printf("The lcm of %d and %d is %d",n1,n2,max);
	break;
}
	else
	{
	lcm=n1*n2;
	printf("The lcm of %d and %d is %d",n1,n2,lcm);
	break;
}
	


}
}
