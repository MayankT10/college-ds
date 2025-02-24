// Que 2. Program to find the sum of array elements
// PRN No. - 20240802543

#include<stdio.h>

int main() {
    int n,sum =0;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++) {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++) {
        sum += arr[i];
    }
    printf("Array: ");
    for (int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\nThe sum of the elements in the above array is %d\n",sum);
    return 0;

}