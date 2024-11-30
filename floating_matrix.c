/* Write a ‘C’ program to find the minimum of the 8 floating point numbers and its place in the array. */

#include <stdio.h>

int main() {
    float numbers[8];
    int i, position = 0;
    float min;

    // Accept 8 floating-point numbers from the user
    printf("Enter 8 floating-point numbers:\n");
    for (i = 0; i < 8; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Initialize minimum and position
    min = numbers[0];
    position = 0;

    // Find the minimum value and its position
    for (i = 1; i < 8; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
            position = i;
        }
    }

    // Print the results
    printf("Minimum value: %.2f\n", min);
    printf("Position in the array: %d (index starts from 0)\n", position);

    return 0;
}
