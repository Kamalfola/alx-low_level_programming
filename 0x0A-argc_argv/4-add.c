#include <stdio.h>
#include <stdlib.h>
/**
 * main - adding positive numbers
 * @argc: count
 * argv: strigs
 */
int main(int argc, char *argv[])
{
	int i = 1, n, sum = 0;

	n = atoi(argv[i]);
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
	else if (atoi(argv[i]) != *argv[i])
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
