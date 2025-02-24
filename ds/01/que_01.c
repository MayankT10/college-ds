// Que 1. Write a C code to check whether the string is palindrome or not
// PRN No. - 20240802543

#include<stdio.h>
#include<string.h>


int is_palindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left<right) {
        if (str[left]!=str[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char str[100];

    printf("Enter a string:");
    scanf("%99s",str);

    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");
    }
    else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}