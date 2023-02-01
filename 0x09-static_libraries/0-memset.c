#include "main.h"
#include <stdio.h>
/**
 * _memset - setting a memory ti a specific value
 * @s: pointer to the memory area
 * @n: number of bytes
 * @b: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
