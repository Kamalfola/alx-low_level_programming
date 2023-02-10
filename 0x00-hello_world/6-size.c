#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{

printf("size of int: %d byte(s)\n",(int) sizeof (char));
printf("size of char: %d byte(s)\n", (int) sizeof (int));
printf("size of long int: %d byte(s)\n", (int) sizeof (long int));
printf("size of long long int: %d byte(s)\n", (int) sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (int) sizeof(float));

return (0);
}
