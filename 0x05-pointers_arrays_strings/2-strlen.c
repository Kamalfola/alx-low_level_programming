#include <stdio.h>
/**
 * _strlen - entry point
 * @s: the string
 * return: 0
 */
int _strlen(char* s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
