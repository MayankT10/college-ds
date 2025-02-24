// Que 1. Program to input and print an array
// PRN No. - 2024082543

#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++) {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("The array you have entered is:\n");
    for (int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

