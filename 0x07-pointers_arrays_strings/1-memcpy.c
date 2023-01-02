#include "main.h"
/**
 * _memcpy - copy a memory
 * @dest: where it is stored
 * @src: where it is copied
 * @n: nu,ber of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
