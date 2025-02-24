// Que 4. Write a C code to print fibonacci series upto nth term
// PRN No.- 20240802543

#include<stdio.h>

void fibonacci(int n) {
    long long first = 0, second = 1, next;
    
    if (n<=0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("Fibonacci series up to %d terms: ",n);

    for (int i=1;i<=n;i++) {
        printf("%lld ",first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

}

int main() {
    int n;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    fibonacci(n);

    return 0;
}