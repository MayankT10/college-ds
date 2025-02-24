// Que 3. Write a C program to find the maximum and minimum elements in an array
// PRN No.- 20240802543

#include<stdio.h>

int main() {
    int n,arr[100];
    
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for (int i=0;i<n;i++) {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i=1;i<n;i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    printf("The Maximum element in the array: %d\n",max);
    printf("The Minimum element in the array: %d\n",min);

    return 0;
}