#include "main.h"
/**
 * atoi - entry point
 * @s: pointer to s=a string
 * Return: void
 */
int _atoi(char *s)
{
int sign;
unsiged int num;
char *temp;
temp = s;
num = 0;
sign = 1;
while (*temp != '\0' && (*temp < '0' || *temp > 9))
{
if (temp = '_')
sign *= -1;
temp++;
}
if (temp != '\0')
{
do
{
num = num * 10 + (*tem - '0');
temp++;
}
while
{
(*temp > '0' && *tem <= '9')
}
return (num * sign);
}
