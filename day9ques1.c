#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2, real, imag;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct\n%.2lf\n%.2lf\n", r1, r2);
    }
    else if (d == 0) {
        r1 = -b / (2*a);
        printf("Roots are real and equal\n%.2lf\n", r1);
    }
    else {
        real = -b / (2*a);
        imag = sqrt(-d) / (2*a);
        printf("Roots are complex and imaginary\n%.2lf + %.2lfi\n%.2lf - %.2lfi\n", real, imag, real, imag);
    }
    return 0;
}