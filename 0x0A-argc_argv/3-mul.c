#include <stdio.h>
#include <math.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument string
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i, muls = 0;

	if
	(argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			muls = atoi(argv[1]) * atoi(argv[2]);
		}
			printf("%d\n", muls);
	}
		else
		{
			printf("ERROR\n");
		}
	return (1);
}
