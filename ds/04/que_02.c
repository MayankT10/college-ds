// Que 2. Write a C code to implement iterative linear search using function
// PRN N0.- 20240802543

#include<stdio.h>

void search_element(int arr[],int n,int search) {
    int found = 0;
    for (int i=0;i<n;i++) {
        if (arr[i]==search) {
            printf("Element found at index %d\n",i);
            found = 1;
            break;
        }
        
    }
    if (!found) {
        printf("Element %d not found in the array\n",search);
    }
}

int main() {
    int n;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements\n",n);
    for (int i=0;i<n;i++) {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int search;

    printf("\nEnter the element that you want to search:");
    scanf("%d",&search);

    search_element(arr,n,search);
    return 0;

}