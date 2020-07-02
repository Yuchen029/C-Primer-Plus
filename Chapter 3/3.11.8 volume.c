#include <stdio.h>

int main(void)
{
    float pint, cup, oz, big, tea;
    printf("Please type in the cups: ");
    scanf("%f", &cup);
    pint = cup / 2;
    oz = cup * 8;
    big = oz * 2;
    tea = big * 3;
    printf("That's equal to %f pints, %f oz, %f big spoons, and %f tea spoons\n",
            pint, oz, big, tea);
    return 0;
}