#include "main.h"
#include <stdio.h>
/**
 * _strncat - entry point
 * @dest: destination
 * @src: source string
 * @n: number if strings
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i =  0;
while (i != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

