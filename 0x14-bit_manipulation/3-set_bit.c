#include "main.h"
/**
 * set_bit - setting the bit of numbers
 * @n: integers
 * @index: index
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
