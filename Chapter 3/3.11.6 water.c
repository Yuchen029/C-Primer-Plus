#include <stdio.h>

int main(void)
{
    float qt, mo;
    printf("Please type in the amount of water: ");
    scanf("%f", &qt);
    mo = qt * 950 / 3E-23;
    printf("That includes %f water molecules\n", mo);
    return 0;
}