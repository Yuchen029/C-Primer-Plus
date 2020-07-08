#include <stdio.h>

void temperatures(double n);

int main(void)
{
    double f;
    printf("Enter the temperature: ");
    while(scanf("%lf", &f) == 1 )
    {
        temperatures(f);
        printf("Enter the temperature: ");
    }
    return 0;
}

void temperatures(double n)
{
    const double first = 5.0;
    const double second = 9.0;
    const double third = 32.0;
    const double fourth = 273.16;
    double c, k;
    c = first / second * (n - third);
    k = c + fourth;
    printf("C = %f, F = %f, K = %f\n", c, n, k);

}