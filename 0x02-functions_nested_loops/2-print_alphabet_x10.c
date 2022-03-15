#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	int i = 0;

	while (i <= 9)
	{
		x = 'a';
		while (x <= 'z')
			{
			_putchar(x);
			x++;
			}
		i++;
		_putchar('\n');
	}
}
