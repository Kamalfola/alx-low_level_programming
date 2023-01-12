#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocating memory
 * @b: number of size
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = (void *)malloc(sizeof(b));
	if (n == 0)
		exit(98);
	return (n);
}
