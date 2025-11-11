#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int v=0, c=0, i=0;
    scanf("%[^\n]", str);
    while(str[i]) {
        char ch = tolower(str[i]);
        if(isalpha(ch)) {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
        i++;
    }
    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}