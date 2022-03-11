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
	}
	if (x == 'e')
	{
	return (1);
	}
	if (x == 'q')
	{
	return (1);
	}
	putchar('\n');
	return (0);
}
