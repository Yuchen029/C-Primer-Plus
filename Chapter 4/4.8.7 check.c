#include <stdio.h>
#include <float.h>

int main(void)
{
    double i = 1.0 / 3.0;
    float j = 1.0 / 3.0;
    printf("%.6f %.6f\n", i, j);
    printf("%.12f %.12f\n", i, j);
    printf("%.16f %.16f\n", i, j);
    printf("%d %d\n", FLT_DIG, DBL_DIG);
    return 0;
}