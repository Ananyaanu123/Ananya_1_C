#include<stdio.h>
int main() {
    int x=42;
    int*ptr=&x;
    int**pptr=&ptr;
    printf("Value of x:%d\n",**pptr);
    printf("Ananya ");
    return 0;
}
