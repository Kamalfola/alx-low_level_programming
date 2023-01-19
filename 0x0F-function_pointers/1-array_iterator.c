#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - iterating array
 * @array: the array
 * @size: The size of the array
 * @action: Pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
