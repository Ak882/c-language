#include <stdio.h>
#include <stdlib.h>

int main() {
    int result = 0; // Initialize result code to 0 (success)
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < 50; i++) {
        if (numbers[i] % 2 == 0) { // Check if the number is even
            printf("Number %d is even\n", numbers[i]);
        } else {
            result = 1; // Set result code to 1 (failure) if an odd number is found
            break; // Exit the loop
        }
    }

    if (result == 0) {
        printf("All numbers are even\n");
    } else {
        printf("At least one number is odd\n");
    }

    exit(result); // Exit with the result code

    return 0; // This line is not reached if exit() is called
}