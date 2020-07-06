#include <stdio.h>

int main(void)
{
    int start, end;
    printf("Enter an integer: ");
    scanf("%d", &start);
    end = start + 10;
    while(start<end+1)
    {
        printf("%d\n", start);
        start++;
    }
    return 0;
}