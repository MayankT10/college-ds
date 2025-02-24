// To check if the number entered by the user is prime or not
// Lab 01 Program 05
// Date - 20/01/2025
// PRN No.- 20240802543

#include<stdio.h>

int main() {
    int num,check_prime=1;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num<=1) {
        check_prime = 0;
    } else {
        for (int i=2;i<num;i++) {
            if (num % i == 0) {
                check_prime = 0;
                break;
            } 
        }
    }

    if (check_prime) {
        printf("%d is a prime number.\n",num);
    } else {
        printf("%d is not a prime number.\n",num);
    }

    return 0;
}

