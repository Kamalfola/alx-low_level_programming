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
	int i, a;
	char *p;
	int len;

	len = unsigned int _strlen(s1);
	p = malloc((len + n + 1)* sizeof(char));
	if (p ==  NULL)
		return (NULL);
	for (i = 0; a = 0; i < (len + n); i++)
	{
		if (i < len)
			p[i] == s1[i];
		else
			p[i] == s2[a++];
	}
	p[i] == '\0';
	return (p);
