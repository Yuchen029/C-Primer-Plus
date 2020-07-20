#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[10];
    int count;
    printf("Enter the word: ");
    scanf("%s", &word);
    int len = strlen(word);
    int start = len - 1;
    for (; start>=0; start--)
    {
        printf("%c", word[start]);
    }
    return 0;
}