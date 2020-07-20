#include <stdio.h>

int main(void)
{
    double f, s, r;
    printf("Enter the two number: ");
    while (scanf("%lf %lf", &f, &s) == 2)
    {
        r = (f - s)/(f * s);
        printf("%f", r);
    }
    return 0;
}