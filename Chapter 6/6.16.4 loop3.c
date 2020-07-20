#include <stdio.h>

int main(void)
{
    int row, col;
    char c = 'A';
    for (row=1; row<7; row++)
    {
        for (col=1; col<row+1; col++)
        {
            printf("%c",c++);
        }
        printf("\n");
    }
    return 0;
}