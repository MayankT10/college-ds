// Que 5. Write a C program to search for an element in an array
// PRN No.- 20240802543

#include<stdio.h>

int search_element(int arr[],int size,int target) {
    for (int i=0;i<size;i++) {
        if (arr[i]==target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;

    printf("Array: ");
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the element to search for: ");
    scanf("%d",&target);

    int result = search_element(arr,size,target);

    if (result!=-1) {
        printf("Element %d found at the index %d\n",target,result);
    } 
    else {
        printf("Element %d not found in the array.\n",target);
    }
    return 0;
}