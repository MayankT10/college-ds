// Que 4. Write a program to reverse an array
// PRN No.- 20240802543

#include<stdio.h>


void reverse_array(int arr[],int start,int end) {
    while(start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    
    start++;
    end--;
    }
}

void print_array(int arr[],int size) {
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array:");
    print_array(arr,n);

    reverse_array(arr,0,n-1);
    printf("\nReverse array:");
    print_array(arr,n);

    return 0;
}