#include "main.h"
/**
 * get_endianness - getting endainness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int n;
	char *c;

	n = 1;
	c = (char *)&n;
	return ((int)*c);
}
