#include <stdio.h>

int main(void)
{
    double num;
    printf("Enter the number: ");
    scanf("%lf", &num);
    num = num * num * num;
    printf("The cube is %f\n", num);
    return 0;
}