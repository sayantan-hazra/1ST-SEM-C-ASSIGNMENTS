/*Write a program to find the sum of the digits of the number*/

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("SUM OF DIGITS: %d\n", sum);

    return 0;
}