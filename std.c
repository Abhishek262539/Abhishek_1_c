#include <stdio.h>

// Structure definition for student
struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s1; 
    
    printf("Enter name: ");
    scanf("%s", s1.name);  

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);  
    printf("Enter marks: ");
    scanf("%f", &s1.marks);  

    // Output the student details
    printf("\nStudent details:\n");
    printf("Name: %s\n", s1.name);  
    printf("Roll: %d\n", s1.roll);  
    printf("Marks: %.2f\n", s1.marks);  

    return 0;
}
