#include <stdio.h>

int main(void)
{
    float in, cm;
    printf("Please type in inches: ");
    scanf("%f", &in);
    cm = in * 2.54;
    printf("That's equal to %f cm", cm);
    return 0;
}