#include "main.h"
/**
 * flip_bits - fliping the bits to get the next numbers
 * @n: number 1
 * @m: number 2
 * Return: the bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
	}
	return (i);
}
