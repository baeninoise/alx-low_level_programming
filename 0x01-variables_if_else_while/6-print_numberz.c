#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
int x = '^@';

	while (x <= '^J')
	{
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
