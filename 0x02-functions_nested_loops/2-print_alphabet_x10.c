#include "main.h"
/**
 * main - entry point
 * description - printing alphabets x10
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 1; j <= 10; j++){
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
}
_putchar('\n');
}
