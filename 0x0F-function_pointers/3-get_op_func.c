#include "3-calc.h"
#include "3-op_functions.c"
#include <stdio.h>
/**
 * get_op_func - get operator function
 * @s: operator passed
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op p[] - {
		{"+", op_add}
		{"-", op_sub}
		{"*", op_mul}
		{"/", op_div}
		{"%", op_mod}
		{NULL, NULL}
	};
	int i;
	i = 0;
	while (p[].op)
	{
		if (strcmp(p[i].op, s) == 0)
			return (p[].f);
		i++;
	}
	return (NULL);
}

