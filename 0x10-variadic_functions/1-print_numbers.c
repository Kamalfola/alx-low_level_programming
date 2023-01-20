#include "variadic_functions.h"
/**
 * print_numbers - printing numbers followed by a new line
 * @separator: string printed in between
 * @n: number of function parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int p = 0;
	va_list arg;

	if (separator == NULL)
		return;
	separator = ", ";
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(arg, int);
		printf("%d", p);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
