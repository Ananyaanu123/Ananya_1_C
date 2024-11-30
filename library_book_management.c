#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100 
struct Book {
    int id;
    char title[100];
    char author[100];
};
void addBook(struct Book books[],
int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Cannot add more books. Storage is full.\n");
        return;
    }

    struct Book newBook;
    printf("Enter Book ID: ");
    scanf("%d", &newBook.id);
    getchar();  
    
    printf("Enter Book Title: ");
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; 
    
    printf("Enter Author: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0';  
    books[*count] = newBook;
    (*count)++;
    
    printf("Book added successfully!\n");
}
void displayBooks
(struct Book books[], int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }
    printf("\nList of Books:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", books[i].id, books[i].title, books[i].author);
    }
}
void searchBookById
(struct Book books[], int count) {
    int id, found = 0;
    
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("Book found!\n");
            printf("ID: %d, Title: %s, Author: %s\n", books[i].id, books[i].title, books[i].author);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}
void deleteBookById
(struct Book books[], int *count) {
    int id, found = 0;

    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) {
        if (books[i].id == id) {
            found = 1;
            for (int j = i; j < *count - 1; j++) {
                books[j] = books[j + 1];
            }
            (*count)--;
            printf("Book with ID %d deleted successfully.\n", id);
            break;
        }
    }

    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}
int main() {
    struct Book books[MAX_BOOKS];
    int count = 0;  
    int choice;

    while (1) {
        printf("\nBook Management System\n");
        printf("1. Add a Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Delete Book by ID\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                searchBookById(books, count);
                break;
            case 4:
                deleteBookById(books, &count);
                break;
            case 5:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}


