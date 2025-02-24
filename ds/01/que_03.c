// Que 3. Write a C code to calculate factorial of a number
// PRN No. - 2024082543

#include<stdio.h>

long long factorial(int num) {
    if (num<0) {
        return -1;
    }
    long long fact = 1;
    for (int i=1;i<=num;i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number;

    printf("Enter a number:");
    scanf("%d",&number);

    if (number<0) {
        printf("Factorial of a negative number is not defined.\n");
    }
    else {
        printf("Factorial of %d is %lld\n",number,factorial(number));
    }
    return 0;
}