#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocating memory
 *@p = pointer
 * @nmemb: number of blocks
 * @size: size of the array
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	p = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
