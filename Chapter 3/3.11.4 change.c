#include <stdio.h>

int main(void)
{
    float flo;
    printf("Enter a floating-point value: ");
    scanf("%f", &flo);
    printf("fixed-point notation: %f\n", flo);
    printf("exponential notation: %e\n", flo);
    printf("p notation: %a\n", flo);
    return 0;
}