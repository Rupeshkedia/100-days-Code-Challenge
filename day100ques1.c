#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *p = &s;

    scanf("%s %d %d", p->name, &p->roll, &p->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d", p->name, p->roll, p->marks);

    return 0;
}