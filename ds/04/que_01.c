// Que 1. Write a C code to implement linear search (native) without function
// PRN No.- 20240802543

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

    int search, found=0;

    printf("Enter the element you want to search: ");
    scanf("%d",&search);

    for (int i=0;i<n;i++) {
        if (arr[i] == search) {
            printf("Element %d is found at index %d\n",search,i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d is not found in array\n",search);
    }

    return 0;
}