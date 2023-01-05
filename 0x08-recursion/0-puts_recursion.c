#include "main.h"
/**
 * _puts_recursion - printing a string
 * @a: the string
 * Return :0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return
	else
	{
		_puts_recursion(char *s);
		_putchar('\n');
	}
}
