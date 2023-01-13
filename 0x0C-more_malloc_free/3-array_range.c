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

	p = malloc(((max - min) + 1) * sizeof(*p));
	if (min > max)
		return (NULL);
	if (p == 0)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
	free(p);
}
