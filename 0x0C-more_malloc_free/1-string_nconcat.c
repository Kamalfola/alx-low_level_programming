#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - string length
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
	int i;
	for (i = 0; s[i]!= '\0'; i++)
	{
		return(i);
	}
/**
 * string_nconcat - concatenating strings
 * @a: number of strings
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, len, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; i++)
		;
	if (n >= j)
		n = j;
	len = i + n;
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	for (k = 0; k < len; k++)
		if (k < i)
			p[k] = s1[k];
		else 
			p[k] = s2[k - i];
	p[i] = '\0';
	return (p);
