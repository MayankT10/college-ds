// Display fibonacci series till the term given by user
// Lab 01 Program 04
// Date - 20/01/2025
// PRN No.- 20240802543

#include<stdio.h>

int main() {
    int n,first=0,second=1,next;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    printf("Fibonacci series:");

    for (int i=0;i<n;i++) {
        if (i<=1) {
            next = i;
        } else {
            next = first+second;
            first = second;
            second = next;
        }
        printf("%d ",next);

    }
    printf("\n");
    return 0;
}