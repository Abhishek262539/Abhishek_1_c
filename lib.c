#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[100];
    char author[100];
    int ISBN;
    int available;
};

int main() {
    struct Book library[MAX_BOOKS];
    int num_books = 0;
    int choice;

    while (1) {
        printf("\nLibrary Book Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Display All Books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (num_books < MAX_BOOKS) {
                    printf("Enter book title: ");
                    scanf("%s", library[num_books].title);
                    printf("Enter book author: ");
                    scanf("%s", library[num_books].author);
                    printf("Enter ISBN: ");
                    scanf("%d", &library[num_books].ISBN);
                    library[num_books].available = 1;
                    num_books++;
                    printf("Book added successfully!\n");
                } else {
                    printf("Library is full.\n");
                }
                break;

            case 2:
                printf("Enter ISBN to search: ");
                int search_ISBN;
                scanf("%d", &search_ISBN);
                int found = 0;
                for (int i = 0; i < num_books; i++) {
                    if (library[i].ISBN == search_ISBN) {
                        printf("Book found:\n");
                        printf("Title: %s\n", library[i].title);
                        printf("Author: %s\n", library[i].author);
                        printf("Availability: %s\n", library[i].available ? "Available" : "Not Available");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Book not found.\n");
                }
                break;

            case 3:
                printf("All Books:\n");
                for (int i = 0; i < num_books; i++) {
                    printf("Title: %s\n", library[i].title);
                    printf("Author: %s\n", library[i].author);
                    printf("ISBN: %d\n", library[i].ISBN);
                    printf("Availability: %s\n\n", library[i].available ? "Available" : "Not Available");
                }
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
