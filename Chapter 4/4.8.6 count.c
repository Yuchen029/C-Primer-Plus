#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[10];
    char family[10];
    int lfirst, lfamily;
    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your family name: ");
    scanf("%s", family);
    lfirst = strlen(first);
    lfamily = strlen(family);
    printf("%*s %*s\n", lfirst, first, lfamily, family);
    printf("%*d %*d\n", lfirst, lfirst, lfamily, lfamily);
    printf("%*s %*s\n", lfirst, first, lfamily, family);
    printf("%-*d %-*d\n", lfirst, lfirst, lfamily, lfamily);
    return 0;
}