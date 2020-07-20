#include <stdio.h>

int main(void)
{
    int r, c, b;
    char ch;
    char a = 'A';
    printf("Enter a character: ");
    scanf("%c", &ch);
    int row = ch - 64;
    for (r=1; r<row+1; r++)
    {
        for (b=0; b<row-r; b++)
        {
            printf(" ");
        }
        for (c=0; c<r; c++)
        {
            printf("%c", a++);
        }
        a--;
        for (; c>1; c--)
        {
            printf("%c", --a);
        }
        a = 'A';
        printf("\n");
    }
    return 0;
}