/* Count no of  vowels, consonants, digits and special symbol from a string. */

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, specialSymbols = 0;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for vowels (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants (letters that are not vowels)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Check for special symbols (non-alphabetic, non-numeric characters)
        else if (ch != ' ' && (ch < '0' || ch > '9') && (ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z')) {
            specialSymbols++;
        }
    }

    // Output the counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special symbols: %d\n", specialSymbols);

    return 0;
}
