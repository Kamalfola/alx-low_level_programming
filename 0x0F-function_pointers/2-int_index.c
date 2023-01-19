#include "function_pointers.h"
/**
 * int_index - intefer index
 * @array: int array
 * @cmp: function to the pointer
 * @size: size of the array
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (!array || !cmp)
		return (1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size || array[i] != '\0'; i++)
		cmp(array[i]);
	return (-1);
}
