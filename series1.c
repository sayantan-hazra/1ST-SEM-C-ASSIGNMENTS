/*Write a program to get the sum of the series :
 
a. 1*22 + 2* 32 + 3* 42 + ………….. + 10* 112*/

#include <stdio.h>

int main() {
    int n = 10, sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1) * (i + 1);
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}