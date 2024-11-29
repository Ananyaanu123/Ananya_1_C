#include <stdio.h>
struct bookdetails {
    int bookid;
    char bookname[50];
    char authorname[50];
    int price;
};
int main() {
    struct bookdetails b1;
    printf("enter book details ");
    printf("enter book id");
    scanf("%d",&b1.bookid);
    printf("enter book name");
    scanf("%s",b1.bookname);
    printf("enter author name");
    scanf("%s",b1.authorname);
    printf("enter the book price");
    scanf("%d",&b1.price);
    printf("\nBook details:\n");
    printf("bookid:%d\n,bookname:%s\n,authorname:%s\n,price:%d\n",b1.bookid,b1.bookname,b1.authorname,b1.price); 
}
