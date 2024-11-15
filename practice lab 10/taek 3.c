#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int ISBN;
    int publicationYear;
    char isAvailable[10];
};

void addBook(struct Book books[], int n) {
int i;
    for ( i = 0; i < n; i++) {
        printf("Enter Book Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Enter Book Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Enter Book ISBN: ");
        scanf("%d", &books[i].ISBN);
        printf("Enter Book Publication Year: ");
        scanf("%d", &books[i].publicationYear);
        strcpy(books[i].isAvailable, "yes");
    }
}

void searchByTitle(struct Book books[], char title[], int n) {
int i;
    for ( i = 0; i < n; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book found: %s by %s, ISBN: %d, Year: %d, Availability: %s\n",
                   books[i].title, books[i].author, books[i].ISBN, books[i].publicationYear, books[i].isAvailable);
            return;
        }
    }
    printf("Book not found by title: %s\n", title);
}

void searchByAuthor(struct Book books[], char author[], int n) {
int i;
    for (i = 0; i < n; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("Book found: %s by %s, ISBN: %d, Year: %d, Availability: %s\n",
                   books[i].title, books[i].author, books[i].ISBN, books[i].publicationYear, books[i].isAvailable);
            return;
        }
    }
    printf("Book not found by author: %s\n", author);
}

void updateAvailability(struct Book *book, const char *status) {
    strcpy(book->isAvailable, status);
}

int main() {
    int n;
    int i;
    printf("Enter the number of books to add: ");
    scanf("%d", &n);
   
    struct Book books[n];

    addBook(books, n);

    char title[50];
    printf("Enter title to search: ");
    scanf(" %[^\n]", title);
    searchByTitle(books, title, n);

    char author[50];
    printf("Enter author to search: ");
    scanf(" %[^\n]", author);
    searchByAuthor(books, author, n);

    int isbnToUpdate;
    printf("Enter ISBN of the book to update availability: ");
    scanf("%d", &isbnToUpdate);
    for (i = 0; i < n; i++) {
        if (books[i].ISBN == isbnToUpdate) {
            char status[10];
            printf("Enter new availability status (yes/no): ");
            scanf("%s", status);
            updateAvailability(&books[i], status);
            printf("Availability updated for book: %s\n", books[i].title);
            break;
        }
    }

    return 0;
}
