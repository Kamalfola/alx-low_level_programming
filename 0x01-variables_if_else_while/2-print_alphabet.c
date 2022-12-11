#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * descripton - print the alphabets in lower case
 * return 0 (success)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return(0);
}
