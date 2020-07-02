#include <stdio.h>

int main(void)
{
    float big = 3E20 * 100.0f;
    printf("%e\n", big);
    return 0;
}