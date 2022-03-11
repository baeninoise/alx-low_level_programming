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
	if (x == 'e')
	{
	continue;
	}
	if (x == 'q')
	{
	continue;
	}
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
