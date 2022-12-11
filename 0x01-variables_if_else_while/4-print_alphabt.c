#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * descrition - print all alphabets except q and e
 * return - 0
 */
int main(void)
{
char c = 'a';
char q = 'q';
char e = 'e';
while (c <= 'z')
{
if (c == q)
{
c++;
continue;
}
if (c == e)
{
c++;
continue;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}
