/*Write a menu driven program to check whether a number is prime, perfect, Armstrong or 
palindrome or not. (use switch case)*/
#include <stdio.h>
#include <math.h>

int main() {
    int choice, num, i, sum, temp, remainder, n, result;

    while(1) {
        printf("\nMenu:\n");
        printf("1. Check Prime\n");
        printf("2. Check Perfect\n");
        printf("3. Check Armstrong\n");
        printf("4. Check Palindrome\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                int isPrime = 1;
                if (num <= 1) {
                    isPrime = 0;
                } else {
                    for (i = 2; i <= sqrt(num); i++) {
                        if (num % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }
                if (isPrime)
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                sum = 0;
                for (i = 1; i <= num / 2; i++) {
                    if (num % i == 0) {
                        sum += i;
                    }
                }
                if (sum == num)
                    printf("%d is a perfect number.\n", num);
                else
                    printf("%d is not a perfect number.\n", num);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                sum = 0;
                temp = num;
                while (temp != 0) {
                    remainder = temp % 10;
                    sum += remainder * remainder * remainder;
                    temp /= 10;
                }
                if (sum == num)
                    printf("%d is an Armstrong number.\n", num);
                else
                    printf("%d is not an Armstrong number.\n", num);
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);
                temp = num;
                result = 0;
                while (temp != 0) {
                    remainder = temp % 10;
                    result = result * 10 + remainder;
                    temp /= 10;
                }
                if (result == num)
                    printf("%d is a palindrome number.\n", num);
                else
                    printf("%d is not a palindrome number.\n", num);
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}