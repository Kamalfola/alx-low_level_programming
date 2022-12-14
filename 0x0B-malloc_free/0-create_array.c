#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - allocating memory for an array
 * @c: pointer to the array
 * @size: number of characters to be assigned
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	b = (char *)malloc(size * sizeof(c));
	if (size == 0)
		return (NULL);
	if (b == 0)
	{
		return (NULL);
	}
	else
		for (i = 0; i < size; i++)
		{
			*(b + i) = c;
		}
	return (b);
	free(b);
}
