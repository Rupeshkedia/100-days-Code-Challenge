#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char c;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");
    if(fp == NULL) {
        printf("File not found");
        return 1;
    }

    while((c = fgetc(fp)) != EOF) {
        characters++;

        if(c == '\n')
            lines++;

        if(!isspace(c) && inWord == 0) {
            inWord = 1;
            words++;
        } else if(isspace(c)) {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d", lines);

    return 0;
}