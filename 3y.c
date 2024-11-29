#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    // Calculate the sum of array elements
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate the average
    float average = (float)sum / size;

    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
