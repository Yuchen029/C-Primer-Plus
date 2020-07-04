#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[10];
    int width;
    printf("Enter your name: ");
    scanf("%s", name);
    width = strlen(name) + 3;
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", width, name);
    return 0;
}