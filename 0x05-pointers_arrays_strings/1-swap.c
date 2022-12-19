#include <stdio.h>
/**
 * swap_int - entry point
 * @a: first pointer
 * @b: second pointer
 * return: void
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
c = *a;
}
