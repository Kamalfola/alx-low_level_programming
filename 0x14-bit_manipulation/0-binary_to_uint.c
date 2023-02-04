#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - changing a binary nuber to a decimal
 * @b: the string
 * Return: b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, base;

	if (!b)
		return (0);
	num = 0;
	for (i = 0; b[i] != '\0'; i++)
		;
		for (i--, base = 1; i >= 0; i--, base *= 2)
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
		if (b[i] & 1)
		{
			num += base;
		}
		}
		return (num);
}
