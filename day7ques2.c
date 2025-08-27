#include <stdio.h>

int main() 
{
    char ch;

    // Read a character from the user
    scanf(" %c", &ch); // Notice the space before %c to consume any leftover newline

    // Check if it's a vowel or consonant
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}
