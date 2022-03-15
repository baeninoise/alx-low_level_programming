#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	int i;

	x = 'a';
	while (i <= 9)
	{
		while (x <= 'z')
			{
			_putchar(x);
			x++;
			}
		_putchar('\n');
	i++;
	return;
	}
}
