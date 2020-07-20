#include <stdio.h>

double compute(double a, double b);

int main(void)
{
    double f, s, r;
    printf("Enter the two number: ");
    while (scanf("%lf %lf", &f, &s) == 2)
    {
        r = compute(f, s);
        printf("%f", r);
    }
    return 0;
}

double compute(double a, double b)
{
    double r;
    r = (a - b)/(a * b);
    return r;
}