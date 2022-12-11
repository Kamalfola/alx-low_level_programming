#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description - print alphabets in reverse
 * Return: 0
 */
int main(void)
{
char b = 'z';
while (b >= 'a')
{
putchar(b);
b--;
}
putchar('\n');
return (0);
}
