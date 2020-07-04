#include <stdio.h>

int main(void)
{
    float inch, feet;
    char name[10];
    printf("Enter your height: ");
    scanf("%f", &inch);
    printf("Enter your name: ");
    scanf("%s", name);
    feet = inch / 12;
    printf("%s, you are %f feet tall\n", name, feet);
    return 0;
}