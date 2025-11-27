#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e;
    printf("Employee: ");
    scanf("%s", e.name);
    printf("ID: ");
    scanf("%d", &e.id);
    printf("Joining Date: ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name, e.id, e.join.day, e.join.month, e.join.year);
    return 0;
}
