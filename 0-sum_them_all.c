#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that sums up
 * @sum: sum of the numbers
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	if (n == 0)
	{
		return (0);
	}
	va_list arg;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, n[i]);
	}
	return (sum);
}
