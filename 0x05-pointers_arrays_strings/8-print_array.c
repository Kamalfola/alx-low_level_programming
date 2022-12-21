#include "main.h"
/**
 * print_array - entry point
 * @a: array
 * @n: numbers of values to be printed
 */
voidd print_array(int *a, int n)
{
int t;
for (t = 0; t > 0; t++)
{
printf("%d", a[t]);
if (t != n - 1)
printf(", ");
}
printf("\n");
}
