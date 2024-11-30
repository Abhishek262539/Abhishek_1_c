[10:14 pm, 29/11/2024] Abhi Rock: #include <stdio.h>

int main() {
    double value, converted_value;
    int choice;

    printf("Unit Converter\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Grams to Kilograms\n");
    printf("4. Kilograms to Grams\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            converted_value = value / 1000;
            printf("%.2lf meters is %.2lf kilometers\n", value, converted_value);
            break;
        case 2:
            converted_value = value * 1000;
            printf("%.2lf kilometers is %.2lf meters\n", value, converted_value);
            break;
        case 3:
         …
[10:16 pm, 29/11/2024] Abhi Rock: Password Validator
○ Description: Write a program to check if a password meets certain criteria
(length, special characters, etc.).
○ Real-World Application: Basic cybersecurity and form validation.
[10:17 pm, 29/11/2024] Abhi Rock: #include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int i, length, has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;

    printf("Enter your password: ");
    fgets(password, 100, stdin);

    length = strlen(password) - 1; // Remove newline character

    // Check password length
    if (length < 8) {
        printf("Password must be at least 8 characters long.\n");
        return 1;
    }

    // Check for character types
    for (i = 0; i < length; i++) {
        if (isupper(password[i])) {
            has_upper = 1;
        } else if (islower(password[i])) {
            has_lower = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else if (!isspace(password[i])) …
[10:18 pm, 29/11/2024] Abhi Rock: Library Book Management System
○ Description: Implement a program to manage book records (e.g., adding,
searching, deleting books).
○ Real-World Application: Used in small-scale library systems
[10:19 pm, 29/11/2024] Abhi Rock: #include <stdio.h>
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
                    printf("Enter book aut…
[10:47 pm, 29/11/2024] Abhi Rock: Student Record Management System
○ Description: Create a program that stores student information such as name, roll
number, marks, etc., and allows viewing, editing, or deleting records.
○ Real-World Application: Used in academic institutions.
[10:47 pm, 29/11/2024] Abhi Rock: #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int roll_number;
    char name[50];
    int marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int num_students = 0;
    int choice;

    while (1) {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Edit Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (num_students < MAX_STUDENTS) {
                    printf("Enter roll number: ");
                    scanf("%d", &students[num_students].roll_number);
                    printf("Enter name: ");
                    scanf("%s", students[num_students].name);
                    printf("Enter marks: ");
                    scanf("%d", &students[num_students].marks);
                    num_students++;
                    printf("Student added successfully!\n");
                } else {
                    printf("Student limit reached.\n");
                }
                break;

            case 2:
                if (num_students == 0) {
                    printf("No students added yet.\n");
                } else {
                    printf("\nStudent Records:\n");
                    for (int i = 0; i < num_students; i++) {
                        printf("Roll Number: %d\n", students[i].roll_number);
                        printf("Name: %s\n", students[i].name);
                        printf("Marks: %d\n\n", students[i].marks);
                    }
                }
                break;

            case 3:
                if (num_students == 0) {
                    printf("No students added yet.\n");
                } else {
                    int search_roll_number;
                    printf("Enter roll number to search: ");
                    scanf("%d", &search_roll_number);
                    int found = 0;
                    for (int i = 0; i < num_students; i++) {
                        if (students[i].roll_number == search_roll_number) {
                            printf("\nStudent Found:\n");
                            printf("Roll Number: %d\n", students[i].roll_number);
                            printf("Name: %s\n", students[i].name);
                            printf("Marks: %d\n", students[i].marks);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Student not found.\n");
                    }
                }
                break;

            case 4:
                if (num_students == 0) {
                    printf("No students added yet.\n");
                } else {
                    int edit_roll_number;
                    printf("Enter roll number to edit: ");
                    scanf("%d", &edit_roll_number);
                    int found = 0;
                    for (int i = 0; i < num_students; i++) {
                        if (students[i].roll_number == edit_roll_number) {
                            printf("Enter new name: ");
                            scanf("%s", students[i].name);
                            printf("Enter new marks: ");
                            scanf("%d", &students[i].marks);
                            printf("Student record updated successfully.\n");
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Student not found.\n");
                    }
                }
                break;

            case 5:
                if (num_students == 0) {
                    printf("No students added yet.\n");
                } else {
                    int delete_roll_number;
                    printf("Enter roll number to delete: ");
                    scanf("%d", &delete_roll_number);
                    int found = 0;
                    for (int i = 0; i < num_students; i++) {
                        if (students[i].roll_number == delete_roll_number) {
                            for (int j = i; j < num_students - 1; j++) {
                                students[j] = students[j + 1];
                            }
                            num_students--;
                            printf("Student record deleted successfully.\n");
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Student not found.\n");
                    }
                }
                break;

            case 6:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
