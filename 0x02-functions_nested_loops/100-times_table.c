#include "main.h"
#include <stdio.h>
/**
 * print_times_table - printing times table 
 * @n: int
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, t;
	scanf("%d", &n);
	if((n <= 15) || (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t = i * j;
				printf("%d", t);
				printf(", ");
			}
			printf("\n");
		}
	}
}
