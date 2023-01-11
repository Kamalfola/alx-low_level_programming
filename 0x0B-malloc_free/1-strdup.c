#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicating a string
 * @str: duplicated string
 * Return:0
 */
char *_strdup(char *str)
{
	char *s;
	int n = strlen(str) + 1;

	s = (char *)malloc(n * sizeof(str));
	if (str == 0)
	{
		return (NULL);
	}
	if (s == 0)
	{
		return (NULL);
	}
		strcpy(s, str);
	return (s);
	free(s);
}
