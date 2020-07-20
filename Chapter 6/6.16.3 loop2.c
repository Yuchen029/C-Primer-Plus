#include <stdio.h>

int main(void)
{
    int row, col;
    char c = 'F';
    for (row=1; row<7; row++)
    {
        for (col=1; col<row+1; col++)
        {
            printf("%c",c--);
        }
        printf("\n");
        c = 'F';
    }
    return 0;
}