#include <stdio.h>

int main(void)
{
    float speed, file, time;
    printf("Enter the speed: ");
    scanf("%f", &speed);
    printf("Enter the size of file: ");
    scanf("%f", &file);
    time = file * 8 / speed;
    printf("At %f megabits per second, a file of %f megabytes\n", speed, file);
    printf("download in %f seconds.", time);
    return 0;
}