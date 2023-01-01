#include "main.h"
#include <string.h>
/**
 * _strcat - entry point
 * @dest: destination string
 * @src: source string
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
int a;
a = strlen(src);
for (i = 0; dest[i] != '\0'; i++)
{
for (j = 0; j != '\0'; j++)
{
dest[i + a] = src[j];
i++;
j++;
}
}
dest[i] = '\0';
return (0);
}
