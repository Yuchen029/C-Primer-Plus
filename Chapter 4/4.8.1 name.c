#include <stdio.h>

int main(void)
{
    char first[10];
    char family[10];
    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your family name: ");
    scanf("%s", family);
    printf("%s,%s\n", first, family);
    return 0;
}