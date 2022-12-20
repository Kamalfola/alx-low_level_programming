#include <stdio.h>
/**
 * _strlen - entry point
 * @s: the string
 * return: 0
 */
int_strlen(char* s)
{
int length = 0;
while (*(s + length) != '\0')
length++;
return (length);
}
