#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - string length
 * @str: string
 * Return: len
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcpy - copy string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - Create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
	return (d);
}

