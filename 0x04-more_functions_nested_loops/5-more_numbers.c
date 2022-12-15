#include "main.h"
/**
 * more_numbers - print more numbers
 * Return: 0
 */
void more_numbers(void)
{
int i, j;
for (j = '1'; j <= '10'; j++)
{
for (i = '0'; i <= '14'; i++)
{
_putchar(i);
}
_putchar(j);
}
_putchar('\n');
}
