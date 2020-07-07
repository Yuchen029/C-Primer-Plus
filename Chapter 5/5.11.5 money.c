#include <stdio.h>

int main(void)
{
    int day, count, sum;
    count = 0;
    sum = 0;
    printf("Enter the days: ");
    scanf("%d", &day);
    while(count++<day)
    {
        sum = sum + count;
    }
    printf("sum = %d\n", sum);
    return 0;
}