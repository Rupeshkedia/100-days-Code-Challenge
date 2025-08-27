#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;

    // Read principal, rate, and time
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate Simple Interest (SI = P * R * T / 100)
    float simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest (CI = P * (1 + R/100)^T - P)
    float compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Display results rounded to 2 decimal places
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}
