#include <stdio.h>

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
            converted_value = value / 1000;
            printf("%.2lf grams is %.2lf kilograms\n", value, converted_value);
            break;
        case 4:
            converted_value = value * 1000;
            printf("%.2lf kilograms is %.2lf grams\n", value, converted_value);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
