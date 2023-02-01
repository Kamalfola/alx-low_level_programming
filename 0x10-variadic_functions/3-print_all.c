#include "variadic_functions"
#include <stdarg.h>
/**
 * print_all - print all characters
 * @format: format of printing
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list(arg);
	int i = 0, j;
	va_start(arg, format);
	while(format && format[i])

