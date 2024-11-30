/* Define a two dimensional array ‘int a[10][10]’. Write a ‘C’ program to initialize this array with numbers between 0 and 99. Then print the contents of ‘a’. */

#include <stdio.h>

int main() {
    int a[10][10];
    int i, j;

    // Seed the random number generator
    srand(time(0));

    // Initialize the array with random numbers between 0 and 99
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            a[i][j] = rand() % 100; // Random number between 0 and 99
        }
    }

    // Print the contents of the array
    printf("Contents of the array:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}