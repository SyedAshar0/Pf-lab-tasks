#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    int bookID;
    char title[100];
    char author[100];
    int quantity;
    float price;
};
void addBook() {
    struct Book books;
    FILE *file = fopen("books.txt", "a");

    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter book ID: ");
    scanf("%d", &books.bookID);
    getchar(); 
    printf("Enter book title: ");
    fgets(books.title, sizeof(books.title), stdin);
    books.title[strcspn(books.title, "\n")] = '\0';  
    printf("Enter author: ");
    fgets(books.author, sizeof(books.author), stdin);
    books.author[strcspn(books.author, "\n")] = '\0';  
    printf("Enter quantity: ");
    scanf("%d", &books.quantity);
    printf("Enter price: ");
    scanf("%f", &books.price);
    if (books.quantity < 0 || books.price < 0) {
        printf("Invalid input. Quantity and price must be non-negative.\n");
        fclose(file);
        return;
    }
    struct Book existingBook;
    FILE *readFile = fopen("books.txt", "r");
    while (fread(&existingBook, sizeof(struct Book), 1, readFile)) {
        if (existingBook.bookID == books.bookID) {
            printf("Book with ID %d already exists!\n", books.bookID);
            fclose(file);
            fclose(readFile);
            return;
        }
    }
    fclose(readFile);
    fwrite(&books, sizeof(struct Book), 1, file);
    printf("Book added successfully.\n");
    fclose(file);
}
void displayBooks() {
    struct Book books;
    FILE *file = fopen("books.txt", "r");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }
    printf("Books in the library:\n");
    printf("ID\tTitle\tAuthor\tQuantity\tPrice\n");

    while (fread(&books, sizeof(struct Book), 1, file)) {
        printf("%d\t%s\t%s\t%d\t%.2f\n", books.bookID, books.title, books.author, books.quantity, books.price);
    }

    fclose(file);
}
void searchBookByID() {
    int bookID;
    struct Book books;
    int found = 0;
    FILE *file = fopen("books.txt", "r");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }
    printf("Enter book ID to search: ");
    scanf("%d", &bookID);
    while (fread(&books, sizeof(struct Book), 1, file)) {
        if (books.bookID == bookID) {
            printf("Book found:\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\nPrice: %.2f\n", books.bookID, books.title, books.author, books.quantity, books.price);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No book found with ID %d.\n", bookID);
    }
    fclose(file);
}
void searchBookByTitle() {
    char title[100];
    struct Book books;
    int found = 0;
    FILE *file = fopen("books.txt", "r");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }
    printf("Enter book title to search: ");
    getchar();  
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';  

    while (fread(&books, sizeof(struct Book), 1, file)) {
        if (strstr(books.title, title) != NULL) {
            printf("Book found:\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\nPrice: %.2f\n", books.bookID, books.title, books.author, books.quantity, books.price);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found with title containing '%s'.\n", title);
    }
    fclose(file);
}
void updateBookDetails() {
    int bookID;
    struct Book books;
    int found = 0;
    FILE *file = fopen("books.txt", "r+b"); 
    if (!file) {
        printf("Error opening file.\n");
        return;
    }
    printf("Enter book ID to update: ");
    scanf("%d", &bookID);
    while (fread(&books, sizeof(struct Book), 1, file)) {
        if (books.bookID == bookID) {
            printf("Book found:\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\nPrice: %.2f\n", books.bookID, books.title, books.author, books.quantity, books.price);
            printf("Enter new quantity: ");
            scanf("%d", &books.quantity);
            printf("Enter new price: ");
            scanf("%f", &books.price);
            if (books.quantity < 0 || books.price < 0) {
                printf("Invalid input. Quantity and price must be non-negative.\n");
                fclose(file);
                return;
            }
            fseek(file, -sizeof(struct Book), SEEK_CUR);
            fwrite(&books, sizeof(struct Book), 1, file);
            printf("Book details updated.\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No book found with ID %d.\n", bookID);
    }
    fclose(file);
}
void deleteBook() {
    int bookID;
    struct Book books;
    FILE *file = fopen("books.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (!file || !temp) {
        printf("Error opening file.\n");
        return;
    }
    printf("Enter book ID to delete: ");
    scanf("%d", &bookID);
    int found = 0;
    while (fread(&books, sizeof(struct Book), 1, file)) {
        if (books.bookID != bookID) {
            fwrite(&books, sizeof(struct Book), 1, temp);
        } else {
            found = 1;
        }
    }
    fclose(file);
    fclose(temp);
    if (found) {
        remove("books.txt");
        rename("temp.txt", "books.txt");
        printf("Book with ID %d deleted.\n", bookID);
    } else {
        printf("No book found with ID %d.\n", bookID);
    }
}
void calculateTotalValue() {
    struct Book books;
    FILE *file = fopen("books.txt", "r");

    if (!file) {
        printf("Error opening file.\n");
        return;
    }
    float totalValue = 0;
    while (fread(&books, sizeof(struct Book), 1, file)) {
        totalValue += books.quantity * books.price;
    }
    printf("Total inventory value: %.2f\n", totalValue);
    fclose(file);
}
void displayMenu() {
    int choice;
    do {
        printf("\n<----- Library Management System ----->\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Search Book by Title\n");
        printf("5. Update Book Details\n");
        printf("6. Delete Book\n");
        printf("7. Calculate Total Inventory Value\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
             addBook();
              break;
            case 2:
             displayBooks();
              break;
            case 3:
             searchBookByID();
              break;
            case 4:
             searchBookByTitle();
              break;
            case 5:
             updateBookDetails();
              break;
            case 6:
             deleteBook();
              break;
            case 7:
             calculateTotalValue();
              break;
            case 8:
             printf("leaving now...\n");
              break;
            default:
             printf("Invalid choice, please try again.\n");
        }
    } while (choice != 8);
}
int main() {
    displayMenu();
    return 0;
}
