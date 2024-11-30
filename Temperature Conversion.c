#include <stdio.h>

void celsius_to_fahrenheit(float celsius) {
    // Formula to convert Celsius to Fahrenheit
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);
}

void fahrenheit_to_celsius(float fahrenheit) {
    // Formula to convert Fahrenheit to Celsius
    float celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f°F is equal to %.2f°C\n", fahrenheit, celsius);
}

int main() {
    int choice;
    float temperature;

    printf("Temperature Conversion: Celsius ↔ Fahrenheit\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose the conversion type (1/2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Convert Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        celsius_to_fahrenheit(temperature);
    }
    else if (choice == 2) {
        // Convert Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        fahrenheit_to_celsius(temperature);
    }
    else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
