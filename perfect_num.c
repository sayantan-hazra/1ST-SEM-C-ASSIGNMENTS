/* Write a program to check whether a number is perfect number or not. */

#include <stdio.h>

int main() {
    int number, sum = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of divisors
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the number
    if (sum == number && number != 0) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
