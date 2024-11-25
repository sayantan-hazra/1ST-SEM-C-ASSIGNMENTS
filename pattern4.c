/*Write separate programs to print the patterns without user input: 

   1
  1 1
 1 1 1
1 1 1 1
*/

#include <stdio.h>

int main() {
    int n = 4; // Number of rows for the pattern

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print 1's for the current row
        for (int j = 1; j <= i; j++) {
            printf("1 ");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
