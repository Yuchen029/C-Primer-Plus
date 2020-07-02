#include <stdio.h>

int main(void)
{
    unsigned long int age, sec;
    printf("Please type in your age: ");
    scanf("%lu", &age);
    sec = age * 3.156E7;
    printf("That's equal to %lu seconds\n", sec);
    return 0;
}