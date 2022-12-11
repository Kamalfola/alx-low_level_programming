#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description - print lower case and upper case alphabets
 * return 0
 */
int main(void)
{
char c = 'a';
char d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return(0);
}
