#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], C[r][c];

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add the matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nSum of the matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}