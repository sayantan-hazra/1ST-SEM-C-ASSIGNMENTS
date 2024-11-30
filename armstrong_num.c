/*Write a C program to check armstrong number*/

#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, count = 0;
    double result = 0.0;

    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        count++;
    }

    originalNum = num;

    // Calculate the sum of the power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, count);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if ((int)result == num)
        printf("IT IS AN ARMSTRONG NUMBER\n");
    else
        printf("IT IS NOT AN ARMSTRONG NUMBER\n");

    return 0;
}
