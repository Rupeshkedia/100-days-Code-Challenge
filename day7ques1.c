#include <stdio.h>

int main() 
{
    int year;

    // Read the year from the user
    scanf("%d", &year);

    // Check for leap year using conditional statements
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}
