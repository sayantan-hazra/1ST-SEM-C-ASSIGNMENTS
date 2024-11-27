/*Write a program to check whether a number is a Krishnamurthy number or not.*/
#include <stdio.h>

int main() {
    int num, sum = 0, temp, digit, factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        temp = temp / 10;

        factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial = factorial * i;
        }

        sum = sum + factorial;
    }

    if (sum == num) {
        printf("%d is a Krishnamurthy number.\n", num);
    } else {
        printf("%d is not a Krishnamurthy number.\n", num);
    }

    return 0;
}