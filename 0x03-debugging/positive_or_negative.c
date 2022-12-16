#include "main.h"                                     
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: print for positive or negative numbers
 * Return: Always 0 (succes)
 */
int main(void)
{
int i;
srand(time(0));
i = rand() - RAND_MAX /2;
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
return (0);
}
