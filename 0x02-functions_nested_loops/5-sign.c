#include "main.h"
#include <stdio.h>
/**
 * print_sign - printing negative or positive
 * @n: Integer checker
 * Return: 1 when it is positive or 0 when it is negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
