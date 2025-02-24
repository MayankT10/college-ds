// Que 3. Program to find maximum and minimum element in an array
// PRN No.- 20240802543

#include<stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements: \n",n);
    for (int i=0;i<n;i++) {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i=1;i<n;i++) {
        if (arr[i] > arr[max]) {
            max = arr[i];
        }
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    printf("Maximum element in an array: %d\n",max);
    printf("Minimum element in an array: %d\n",min);
    return 0;
}