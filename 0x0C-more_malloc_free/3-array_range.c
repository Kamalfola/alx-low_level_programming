#include "main.h"
#include <stdlib.h>
/**
 * array_range - range of array
 * @min: minimum value
 * @max: maximum value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
	free(p);
}
