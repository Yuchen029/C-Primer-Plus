#include <stdio.h>
#define GALLON 3.785
#define MILE 1.609

int main(void)
{
    float dis, oil, eff1, l, km, eff2;
    printf("Enter the distance: ");
    scanf("%f", &dis);
    printf("Enter the oil consumed: ");
    scanf("%f", &oil);
    eff1 = dis / oil;
    printf("The car can drive %f miles with 1 gallon oil\n", eff1);
    km = dis * MILE;
    l = oil * GALLON;
    eff2 = km / l;
    printf("The car can drive %f kilometers with 1 liter oil\n", eff2);
    return 0;
}