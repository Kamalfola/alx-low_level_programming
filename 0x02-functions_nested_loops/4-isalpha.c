#include "main.h"
/**
 * _isalpha - print uppercase and lowercase
 * @c: the character to be checked
 * Return: 1 if it is uppercase or lowercase or return 0 for anything else
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
return (0);
}
