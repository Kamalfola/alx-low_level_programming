#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - print numbers of base 16
 * Return: 0
 * */
int main(void)
{
int b = 0;
while (b < 16)
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
