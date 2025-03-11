// Insertion Sort
// PRN No.- 20240802543

#include<stdio.h>


void insertion_sort(int arr[],int n) {
    for (int i=1;i<n;i++) {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = key;
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
    insertion_sort(arr,n);
    print_array(arr,n);
    return 0;
}