/* Write a ‘C’ program to find out sum of diagonal elements of a matrix */

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    int matrix[10][10];

    // Input the size of the square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i]; // Sum of main diagonal elements
    }

    // Display the result
    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}
