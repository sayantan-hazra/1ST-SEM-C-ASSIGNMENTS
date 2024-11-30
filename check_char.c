/* To check a given character is vowel or consonant. */

#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || 
        ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("The character '%c' is a vowel.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character '%c' is a consonant.\n", ch);
    } else {
        printf("The input '%c' is not an alphabet letter.\n", ch);
    }

    return 0;
}
