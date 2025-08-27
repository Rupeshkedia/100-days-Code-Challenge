#include <stdio.h>

#define PI 3.1416

int main() 
{
    float r;

    scanf("%f", &r);

    float area = PI * r * r;
    float circumference = 2 * PI * r;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
