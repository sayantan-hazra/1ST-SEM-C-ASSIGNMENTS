/* Convert  a string from upper case to lower case */

#include <stdio.h>

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert each character to lowercase manually
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  // Convert to lowercase by adjusting ASCII value
        }
    }

    // Output the converted string
    printf("Converted string to lowercase: %s\n", str);

    return 0;
}

