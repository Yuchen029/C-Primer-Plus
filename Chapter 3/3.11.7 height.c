#include <stdio.h>

int main(void)
{
    float inch, cm;
    printf("Please type in your height: ");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("That's equal to %f cm\n", cm);
    return 0;
}