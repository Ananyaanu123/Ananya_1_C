#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, *arr;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    //Allocating memory
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n"); 
        return 1;
    }
    // Taking input
    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
    // Printing elements
    printf("The elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d",arr[i]);
    }
    // Freeing memory
    free(arr);
    printf("after free %d",*arr);
    return 0;
}
