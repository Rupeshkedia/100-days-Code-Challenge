#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Read input in seconds
    scanf("%d", &totalSeconds);

    // Convert to hours, minutes, and seconds
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    // Display the result
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
