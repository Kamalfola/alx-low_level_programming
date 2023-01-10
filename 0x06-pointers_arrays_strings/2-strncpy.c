#include "main.h"
#include <string.h>
/**
 * _strncpy - copyn numbers of a string
 * @n: nunmber of string
 * @dest: destination
 * @src: source
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
return (dest);
}
