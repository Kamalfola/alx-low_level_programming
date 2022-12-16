#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * 3 prints fizz
 * 5 prints buzz
 * 3 & 5 prints fizz-buzz
 * Return: 0
 */
int main(void)
{
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FuzzBuzz";
for (i = 0; i <= 100; i++)
{
if (i == 100)
printf("%s", b);
else if (i % 3 == 0)
printf("%s", f);
else if (i % 5)
printf("%s", b);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%s", fb);
else
printf("%d", i);
}
printf("\n");
return (0);
}

