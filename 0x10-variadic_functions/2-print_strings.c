#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_strings - printing strings
 * @separator: comma
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(arg);
	unsigned int i;
	char *p;

	separator = ", ";
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(arg, char *);
		if (p)
		{
		printf("%s", p);
		}
		else
			printf("nil");
		if (i < n - 1)
		{
			if (separator)
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
