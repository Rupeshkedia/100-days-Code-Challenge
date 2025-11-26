#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;
    for(i=0;i<5;i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].marks);
    }
    for(i=0;i<5;i++) {
        printf("%s %d %.0f\n", s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}