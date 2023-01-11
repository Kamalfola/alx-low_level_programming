#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicating a string
 * @s: duplicated string
 * Return:0
 */
char *_strdup(char *str)
{
	char *s;
	int n = 0;
	s = (char *)malloc(n * strlen(str));
	if (str == 0)
	{
		return NULL;
	}
	if (s == 0)
	{
		return (NULL);
	}
		strcpy(s, str);
	return(s);
	free(s);
}
