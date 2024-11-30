/* Write a c program to accept 5 numbers and print highest and lowest number among them */

#include <stdio.h>

int main() {
    int numbers[5];
    int i, highest, lowest;

    // Accept 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize highest and lowest with the first number
    highest = lowest = numbers[0];

    // Find the highest and lowest numbers
    for (i = 1; i < 5; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
        if (numbers[i] < lowest) {
            lowest = numbers[i];
        }
    }

    // Print the results
    printf("Highest number: %d\n", highest);
    printf("Lowest number: %d\n", lowest);

    return 0;
}
