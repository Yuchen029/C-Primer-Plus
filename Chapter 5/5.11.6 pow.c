#include <stdio.h>

int main(void)
{
    int day, count;
    long sum;
    count = 0;
    sum = 0;
    printf("Enter the days: ");
    scanf("%d", &day);
    while(count++<day)
    {
        sum = sum + count * count;
    }
    printf("sum = %ld\n", sum);
    return 0;
}