// To check if the string entered by the user is palindrome or not
// Lab 01 Program 02
// Date - 20/01/2025
// PRN No.- 20240802543

#include<stdio.h>
#include<string.h>

int main() {
    char str[30],reverse_str[30];
    int length , check_palindrome = 1;
    printf("Enter a word to check:");
    scanf("%s",str);

    length = strlen(str);

    for (int i=0;i<length;i++) {
        if (str[i] != str[length-i-1]) {
            check_palindrome = 0;
            break;
        } 
    }

    if (check_palindrome) {
        printf("Yes,its a palindrome.\n");
    } else {
        printf("No,its not a palindrome.\n");
    }
    return 0;
}