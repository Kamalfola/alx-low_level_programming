#include <stdio.h>
/**
 * _strlen - entry point
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
