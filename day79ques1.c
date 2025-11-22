#include <stdio.h>

int main() {
    FILE *fp;
    int x, sum = 0, count = 0;
    fp = fopen("numbers.txt", "r");
    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }
    fclose(fp);
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", (float)sum / count);
    return 0;
}