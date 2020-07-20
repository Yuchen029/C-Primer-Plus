#include <stdio.h>

int main(void)
{
    int max, min;
    printf("Enter the biggest: ");
    scanf("%d", &max);
    printf("Enter the smallest: ");
    scanf("%d", &min);
    for (; min<=max; min++)
    {
        printf("%d %d %d\n", min, min*min, min*min*min);
    }
    return 0;
}