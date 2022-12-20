#include "main.h"
/**
 * _puts - the strings entry point
 * @str: the string to be printed
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
