/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
