/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
int i, l;
for (i = 48; i <= 57; i++)
{
for (l = 48; l <= 57; l++)
{
putchar(i);
putchar(l);
if (i < 57 || l != 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
