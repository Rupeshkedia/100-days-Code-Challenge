#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTop(struct Student s[], int n) {
    int i, idx = 0;
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[idx].marks)
            idx = i;
    }
    return s[idx];
}

int main() {
    struct Student s[3];
    int i;
    for(i = 0; i < 3; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    struct Student top = getTop(s, 3);
    printf("Top Student: %s | Roll: %d | Marks: %d", top.name, top.roll, top.marks);
    return 0;
}
