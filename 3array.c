#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("%d found at index %d\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("%d not found in the array.\n", target);
    }

    return 0;
}
