// Que 3. Write a C code to implement recursive linear search using function
// PRN N0.- 20240802543

#include<stdio.h>

int search_element(int arr[],int n,int key,int index) {
    if (index>=n) {
        return -1;
    }
    if (arr[index]==key) {
        return index;
    }
    return search_element(arr,n,key,index+1);
    
}

int main() {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;

    printf("Enter the element to search:");
    scanf("%d",&key);

    int result = search_element(arr,n,key,0);
    if (result!=-1) {
        printf("Element found at index %d\n",result);
    }
    else {
        printf("Element not found\n");
    }
    return 0;
}