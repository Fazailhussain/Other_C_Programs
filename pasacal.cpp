#include<stdio.h>

int factorial(int num) {
    int fact = 1;
    for(int i = num; i >= 1; i--) {
        fact *= i;
    }
    return fact;
}

void pascal_triangle(int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <= rows - i; j++) {
            printf(" ");
        }
        for(int k = 0; k <= i; k++) {
            int coefficient = factorial(i) / (factorial(k) * factorial(i - k));
            printf("%d ", coefficient);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    pascal_triangle(rows);
    return 0;
}

