#include <stdio.h>

int main() {
    char filename[100], ch;
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist");
        return 0;
    }

    printf("File opened successfully.\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}