#include<stdio.h>
struct Adress {
    char city[50];
    int pin;
};
struct Person {
    char name[50];
    struct Adress addr;
};
int main() {
    struct Person p;
    printf("enter name:");
    scanf("%s",p.name);
    printf("enter city:");
    scanf("%s",p.addr.city);
    printf("enter pin:");
    scanf("%d",&p.addr.pin);
    printf("\nPersonal Details:\n");
    printf("Name:%s\nCity:%s\nPin:%d\n",p.name,p.addr.city,p.addr.pin);
    return 0;
}
