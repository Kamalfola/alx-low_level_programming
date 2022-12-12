#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description -print numbers seperated by commas
 * return: 0
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar (n + '0');
if (n < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
