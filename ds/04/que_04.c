// Que 4. Write a C code to implement iterative binary search using function
// PRN No.- 20240802543

#include<stdio.h>

int search_element(int arr[],int n,int key) {
    int left = 0 , right = n -1;
    while (left<=right) {
        int mid = left + (right-left)/2;
        if (arr[mid]==key) {
            return mid;
        }
        if (arr[mid]<key) {
            left = mid+1;
        }
        else {
            right = mid - 1;
        }
        
    }
    return -1;
}

int main() {
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 40;

    int result = search_element(arr,n,key);

    if (result!=-1) {
        printf("Element %d found at index %d\n",key,result);
    }
    else { 
        printf("Element %d not found in the array\n",key);
    }
    return 0;

}