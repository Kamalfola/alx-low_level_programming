#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializing a variable
 * @name:name
 * @age: age
 * @owner: owner
 * @d: pointer to the members
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
