#include <stdio.h>

int PerfectNumber(int num) 
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) 
	{
        if (num % i == 0) 
		{
            sum += i;
        }
    }
    sum==num?printf("%d is a perfect number",sum):printf("%d is not a perfect number",sum)
	}

void printPerfectNumbers(int lower, int upper) {
    printf("Perfect numbers between %d and %d:\n", lower, upper);
    
    for (int i = lower; i <= upper; i++) {
        if (isPerfectNumber(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int lower, upper;
    
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    
    printPerfectNumbers(lower, upper);
}

