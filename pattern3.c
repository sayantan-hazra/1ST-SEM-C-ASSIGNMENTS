/* Write separate programs to print the patterns without user input: 

1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include <stdio.h>

int main() {
    int n = 5; // Number of rows for the pattern

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Print '1' if the column index is odd, otherwise print '0'
            if (j % 2 == 1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
