#include <stdio.h>

void smile(void);

int main(void)
{
    int i, j;
    for(i=1; i<4; i++)
    {
        for(j=1; j<(5-i); j++)
        {
            smile();
        }
        printf("\n");
    }
    return 0;
}

void smile(void)
{
    printf("Smile!");
}