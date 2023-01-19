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

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
}
return (-1);
}
