#include "main.h"
/**
 * print_diagonal - entry point
 * @n: number of times
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('92');
}
_putchar('\n');
}
