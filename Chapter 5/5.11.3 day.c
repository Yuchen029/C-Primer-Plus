#include <stdio.h>
#define TIME 7

int main(void)
{
    int days, week, day;
    printf("Enter the days: ");
    scanf("%d", &days);
    while(days>0)
    {
        week = days / TIME;
        day = days % TIME;
        printf("%d days are %d weeks, %d days.\n", days, week, day);
        printf("Enter the days: ");
        scanf("%d", &days);
    }
    return 0;
}