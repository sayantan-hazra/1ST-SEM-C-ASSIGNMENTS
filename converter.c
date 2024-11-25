/*Write a program to convert decimal to binary, octal or hexadecimal (without using array and function both) */

#include <stdio.h>

int main() {
    int num, base, temp;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Enter the base for conversion (2 for binary, 8 for octal, 16 for hexadecimal): ");
    scanf("%d", &base);

    if (base != 2 && base != 8 && base != 16) {
        printf("Invalid base\n");
        return 1;
    }

    printf("The converted number is: ");
    temp = num;
    long long result = 0;
    long long place = 1;

    while (temp > 0) {
        int remainder = temp % base;
        result += remainder * place;
        place *= 10;
        temp /= base;
    }

    printf("%lld\n", result);
    return 0;
}