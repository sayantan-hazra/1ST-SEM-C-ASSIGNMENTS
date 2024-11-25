/* Write a program to get the sum of the series :

b. x+ x2/2 + x3/4 + x4/7 + x5/11 + x6/16+…… (take n from user)*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0, denominator = 1;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)pow(x, i) / denominator;
        denominator += i;
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}