#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
	putchar(x);
	x++;
	if (x == 'e')
	{
	x++;
	}
	if (x == 'q')
	{
	x++;
	}
	putchar('\n');
	}
	return (0);
}
