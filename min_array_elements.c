#include<stdio.h>
int main() {
    int arr[5]={10,20,5,15,30} ,
    min =arr[0];
    for(int i=1; i<5; i++) if (arr[i] <min) min = arr[i];
    printf("Min:%d\n",min);
    printf("Ananya");
    return 0;
}
