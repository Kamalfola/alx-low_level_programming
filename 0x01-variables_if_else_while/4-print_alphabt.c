#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * descrition - print all alphabets except q and e
 * return - 0
 */
int main()
{
char c = 'a';
char q = 'q';
char e = 'e';
while (c <= 'z')
{
if (c == q)
{
break;
}
if (c == e)
{
break;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}
