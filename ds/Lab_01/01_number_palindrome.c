// To check if the number given by user is palindrome or not
// Lab 01 Program 01
// Date - 20/01/2024
// PRN No. - 20240802543

#include<stdio.h>

int main() {
    int user_num,remainder,reverse_num,num;
    reverse_num = 0;
    printf("Enter a number:");
    scanf("%d",&user_num);

    num = user_num;
    while(num!=0) {
        remainder = num % 10;
        reverse_num = reverse_num * 10 + remainder;
        num /= 10;        

    }

    if (user_num == reverse_num) {
        printf("Yes, %d is a palindrome.\n",user_num);
    } else {
        printf("No, %d is not a palindrome.\n",user_num);
    }
    return 0;
}