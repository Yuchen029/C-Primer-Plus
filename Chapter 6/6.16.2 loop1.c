#include <stdio.h>

int main(void)
{
    int row, col;
    for (row=1; row<6; row++)
    {
        for (col=1; col<row+1; col++)
        {
            printf("%c",'$');
        }
        printf("\n");
    }
    return 0;
}