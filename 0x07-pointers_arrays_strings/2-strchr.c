#include "main.h"
/**
 * _strchr - locating a character in string
 * @s: input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; i != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
else
{
return ('\0');
}
}
return (0);
}
