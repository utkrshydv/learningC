#include <stdio.h>

typedef struct {
    char name[100];
    char author[50];
    int bookID;
    char pubYear[5];
} Book;

int main() {

    Book book;

    printf("Enter the book name: ");
    scanf("%s", book.name);

    printf("Enter the author's name: ");
    scanf("%s", book.author);

    printf("Enter the book ID: ");
    scanf("%d", &book.bookID);

    printf("Enter the publication year: ");
    scanf("%s", book.pubYear);

    printf("\nBook Details:\n");
    printf("Name: %s\n", book.name);
    printf("Author: %s\n", book.author);
    printf("Book ID: %d\n", book.bookID);
    printf("Publication Year: %s\n", book.pubYear);

    return 0;
}
