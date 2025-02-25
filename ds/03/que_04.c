// Que 4. Write a C code to copy the elements of one array into another array
// PRN No.- 20240802543

#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr1[n],arr2[n];
    printf("Enter the elements;\n");
    for (int i=0;i<n;i++) {
        printf("Element %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    for (int i=0;i<n;i++) {
        arr2[i] = arr1[i];
    }

    printf("Original array: ");
    for (int i=0;i<n;i++) {
        printf("%d ",arr1[i]);
    }
    
    printf("\nCopied array: ");
    for (int i=0;i<n;i++) {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}