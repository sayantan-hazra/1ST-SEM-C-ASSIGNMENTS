/*Write a program to check whether a number is a Krishnamurthy number or not.*/
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isKrishnamurthy(int n) {
    int sum = 0, temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == n);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isKrishnamurthy(number)) {
        printf("%d is a Krishnamurthy number.\n", number);
    } else {
        printf("%d is not a Krishnamurthy number.\n", number);
    }

    return 0;
}