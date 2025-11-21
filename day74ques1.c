#include <stdio.h>
#include <stdlib.h>

int main() {
    char src[100], dest[100];
    printf("Enter source filename: ");
    scanf("%s", src);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *fs = fopen(src, "r");
    if (!fs) {
        printf("Source file not found");
        return 0;
    }

    FILE *fd = fopen(dest, "w");
    if (!fd) {
        printf("Cannot open destination file");
        fclose(fs);
        return 0;
    }

    int ch;
    while ((ch = fgetc(fs)) != EOF)
        fputc(ch, fd);

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s", dest);
    return 0;
}