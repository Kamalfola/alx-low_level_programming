#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * return: void
 */
void print_triangle(int size)
{
int l, b, h;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (b = 0; b <= (size - 1); b++)
{
for (l = 0; l <= (size - 1) - b; l++)
{
_putchar(' ');
}
for (h = 0; h <= b; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
