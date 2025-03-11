// Quick Sort
// PRN No.- 20240802543

#include<stdio.h>


void swap(int* a,int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int low,int high) {
    int p = arr[low];
    int i = low;
    int j = high;


    while(i<j) {
        while (arr[i] <= p && i <= high - 1) {
            i++;
        }
        while (arr[j] > p && j >= low + 1) {
            j--;
        }
        if(i<j) {
            swap(&arr[i],&arr[j]);
        }
    }   
}


void quick_sort(int arr[],int low,int high) {
    if (low<high) {
        int pi = partition(arr,low,high);

        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
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
    quick_sort(arr,0,n-1);
    print_array(arr,n);
    return 0;
}