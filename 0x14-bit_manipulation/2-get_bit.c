#include "main.h"
#include  <stdio.h>
/**
 * get_bit - getting bit
 * @n: the integer
 * @index: the index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
	{
		unsigned int i;

		for (i = 0; i <= 63; n >>= 1, i++)
		{
			if (index == i)
			{
				return (n & 1);
			}
		}
		return (-1);
	}
