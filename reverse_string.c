/* To reverse a string given as user input */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int length, i, j;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if it is present
    str[strcspn(str, "\n")] = '\0';

    // Get the length of the string
    length = strlen(str);

    // Reverse the string
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversedStr[j] = str[i];
    }
    reversedStr[j] = '\0'; // Null-terminate the reversed string

    // Output the reversed string
    printf("Reversed string: %s\n", reversedStr);

    return 0;
}
