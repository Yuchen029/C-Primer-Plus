#include <stdio.h>
#define TRANSINCH 0.39370
#define TRANSFEET 12

int main(void)
{
    float cm, inch;
    printf("Enter a height in centimeters: ");
    scanf("%f", &cm);
    while(cm>0)
    {
        inch = cm * TRANSINCH;
        int feet = inch / TRANSFEET;
        inch = inch - (feet * TRANSFEET);
        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inch);
        printf("Enter a height in centimeters: ");
    scanf("%f", &cm);
    }
    return 0;
}