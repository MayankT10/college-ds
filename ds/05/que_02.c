// Selection Sort
// PRN No.- 20240802543

#include<stdio.h>

void selection_sort(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        int mini = i;
        for (int j=i+1;j<n;j++) {
            if (arr[j]<arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
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
    selection_sort(arr,n);
    print_array(arr,n);
    return 0;
}