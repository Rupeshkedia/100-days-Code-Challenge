#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3];
    int i, maxIndex = 0;

    for(i = 0; i < 3; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].marks);
        if(s[i].marks > s[maxIndex].marks) maxIndex = i;
    }

    printf("Topper: %s (Marks: %.0f)", s[maxIndex].name, s[maxIndex].marks);

    return 0;
}