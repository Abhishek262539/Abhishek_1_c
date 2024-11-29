#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
};

int main() {
    int n;
    
    
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];  

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        getchar();  
        fgets(employees[i].name, sizeof(employees[i].name), stdin); 
        employees[i].name[strcspn(employees[i].name, "\n")] = 0; 

        printf("Enter salary of %s: ", employees[i].name);
        scanf("%f", &employees[i].salary);
    }

    
    float totalSalary = 0;
    for (int i = 0; i < n; i++) {
        totalSalary += employees[i].salary;
    }

  
    float averageSalary = totalSalary / n;
    printf("\nAverage salary of employees: %.2f\n", averageSalary);

    return 0;
}
