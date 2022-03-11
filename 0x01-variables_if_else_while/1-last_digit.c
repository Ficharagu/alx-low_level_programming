#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
int num;
int s;

srand(time(0));
num = rand() - RAND_MAX / 2;

s = num % 10;

if (s > 5)
{
printf("Last digit of %d is %d and is greater than 5\n",
num, s);
}
if (s == 0)
{
printf("Last digit of %d is %d and is 0\n", num, s);
}
if (s < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",
num, s);
}

return (0);
}
