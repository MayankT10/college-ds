// Que 2. Write a C code to check whether the number is palindrome or not
// PRN No. - 20240802543

#include<stdio.h>

int is_palindrome(int num) {
    int original_num = num, reversed_num = 0, remainder;

    while(num>0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num/=10;
    }
    return (original_num == reversed_num);
}

int main() {
    int number;
    
    printf("Enter a number:");
    scanf("%d",&number);

    if (is_palindrome(number)) {
        printf("%d is a palindrome.\n",number);
    }
    else {
        printf("%d is not a palindrome.\n",number);
    }
    return 0;
}
