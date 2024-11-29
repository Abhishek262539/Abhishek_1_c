#include <stdio.h>
#include <string.h>


struct Book {
    char title[50];
    char author[50];
    int publication_year;
};

int main() {
    struct Book book;  
 printf("Enter the book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    
    book.title[strcspn(book.title, "\n")] = '\0';

    printf("Enter the author name: ");
    fgets(book.author, sizeof(book.author), stdin);
    
    book.author[strcspn(book.author, "\n")] = '\0';

    printf("Enter the publication year: ");
    scanf("%d",&book.publication_year); 
    printf("\nBook Details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Publication Year: %d\n", book.publication_year);

    return 0;
}
