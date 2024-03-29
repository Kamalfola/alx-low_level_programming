#include "function_pointers.h"
/**
 * print_name - printing the name
 * @f: pointer to the function
 * @name: name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	return;
	f(name);
}
