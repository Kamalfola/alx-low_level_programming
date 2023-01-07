#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adding positive numbers
 * @argc: count
 * @argv: strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1, n, sum = 0, a;

	n = atoi(argv[i]);
	a = isdigit(*argv[i]);
	if (n >= 1 && argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc <= 1)
	{
		printf("0\n");
	}
	else if (n != a)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
