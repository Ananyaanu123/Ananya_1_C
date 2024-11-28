#include<stdio.h>
#include<string.h>
int main() {
    char a[100], b[100];
    printf("Enter the first string:");
    scanf("%s", a);
    printf("Enter the second string:");
    scanf("%s", b);
    printf("The length of the first string is %d\n",strlen(a));
    printf("The length of the second string is %d\n",strlen(b));
    printf("The concatenated string is %s\n",strcat(b,a));
    printf("The concatenated string is %s\n",strcat(a,b));
    printf("The comparing string is %d\n",strcmp(a,b));
    printf("The copy of the first string is %s\n",strcpy(a,b));
    printf("The copy of the second string is %s\n",(b,a));
}
