#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    char g[10];
    scanf("%s", g);

    struct Person p;

    if(strcmp(g, "MALE") == 0) p.gender = MALE;
    else if(strcmp(g, "FEMALE") == 0) p.gender = FEMALE;
    else p.gender = OTHER;

    if(p.gender == MALE) printf("Male");
    else if(p.gender == FEMALE) printf("Female");
    else printf("Other");

    return 0;
}