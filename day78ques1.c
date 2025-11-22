#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int v = 0, c = 0;
    fp = fopen("text.txt", "r");
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\n", v);
    printf("Consonants: %d", c);
    return 0;
}