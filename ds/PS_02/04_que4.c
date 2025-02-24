// Que 4. Program to reverse an array
// PRN No.- 20240802543

#include<stdio.h>

void reverse_array(int arr[],int start,int end) {
    while (start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void print_array(int arr[],int size) {
    for (int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = 
}