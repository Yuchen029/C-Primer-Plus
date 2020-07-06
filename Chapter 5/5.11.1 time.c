#include <stdio.h>
#define TIME 60

int main(void)
{
    int min, hour;
    printf("Enter the minutes: ");
    scanf("%d", &min);
    while(min>0)
    {
        hour = min / TIME;
        min = min % TIME;
        printf("That's equal to %d hours %d minutes\n", hour, min);
        printf("Enter the minutes: ");
        scanf("%d", &min);
    }
    return 0;
}