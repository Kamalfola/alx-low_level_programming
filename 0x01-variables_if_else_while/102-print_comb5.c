#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * description - printing combination of numbers
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 1; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
