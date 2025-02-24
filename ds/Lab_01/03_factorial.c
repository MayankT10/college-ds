// To calculate factorial of a number given by user
// Lab 01 Program 03
// Date - 20/01/2025
// PRN No.- 20240802543

#include<stdio.h>

int factorial(int n) {
    if (n==0||n==1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n",num,factorial(num));
    return 0;
}