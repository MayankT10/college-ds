// Bubble sort
// PRN No.- 20240802543

#include<stdio.h>

void bubble_sort(int arr[],int n) {
    for (int i =0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
}

void print_array(int arr[],int n) {
    for (int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10,50,20,30,25,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    print_array(arr,n);
    return 0;
}