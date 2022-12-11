#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prinf if n is greater than 5 or less than 6
 * Return: Always 0 (success)
 */
int main (void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("%d is greater than 5\n", n);
}
else if (n < 6)
{
printf("%d is less than 6 and not 0\n", n);
}
else {
printf("%d is 0\n", n);
}
return (0);
}
