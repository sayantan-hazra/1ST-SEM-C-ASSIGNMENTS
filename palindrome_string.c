/* To check if a given character string is palindrome or not */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int length, i, isPalindrome = 1;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Get the length of the string
    length = strlen(str);

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; // Set to false if characters do not match
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}