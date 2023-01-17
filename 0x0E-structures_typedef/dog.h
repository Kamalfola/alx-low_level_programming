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
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcpy(char *dest, char* src);
#endif
