#include <stdio.h>

int main(void)
{
    int ascii;
    char chara;
    printf("Please type in an ASCII number: ");
    scanf("%d", &ascii);
    chara = ascii;
    printf("That's %c\n", chara);
    return 0;
}