// Que 5. Write a C code to implement recurssive binary search using function
// PRN No. - 20240802543

#include<stdio.h>

int search_element(int arr[],int low,int high,int key) {
    if (low>high) {
        return -1;
    }

    int mid = low + (high-low)/2;

    if  (arr[mid]==key) {
        return mid;
    }

    else if (arr[mid]<key) {
        return search_element(arr,mid+1,high,key);
    }
    else {
        return search_element(arr,low,mid-1,key);
    }

}

int main() {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;

    printf("Enter element to search:");
    scanf("%d",&key);

    int result = search_element(arr,0,n-1,key);
    if (result!=-1) {
        printf("Element found at index %d\n",result);
    }
    else {
        printf("Element not found");
    }
    return 0;
}