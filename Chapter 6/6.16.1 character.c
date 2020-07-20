#include <stdio.h>

int main(void)
{
    char chara[26];
    int count, check;
    for (count=0; count<26; count++)
    {
        chara[count] = 97 + count;
    }
    for (check=0; check<26; check++)
    {
        printf("%c",chara[check]);
    }
    return 0;
}