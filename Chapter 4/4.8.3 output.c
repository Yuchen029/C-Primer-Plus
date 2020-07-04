#include <stdio.h>

int main(void)
{
    float flo;
    printf("Enter a float number: ");
    scanf("%f", &flo);
    printf("The input is %f or %e\n", flo, flo);
    printf("The input is %+f or %E\n", flo, flo);
    return 0;
}