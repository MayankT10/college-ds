// Que 3. Write a C code to print all the unique elements in an array
// PRN No.- 20240802543

#include<stdio.h>

int main() {
    int n,flag;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements:\n");

    for (int i=0;i<n;i++) {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Unique element is/are ");
    for (int i=0;i<n;i++) {
        flag = 1;
        for (int j=0;j<n;j++) {
            if (i!=j && arr[i] == arr[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    return 0;
}