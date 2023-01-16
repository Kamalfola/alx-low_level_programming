#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @owner: dog owner
 * @name: nameof dog
 * @age: age of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog doggy;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
