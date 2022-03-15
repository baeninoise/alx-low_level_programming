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
	for (i = 0; i <= 9; i++)
	{
		while (x <= 'z')
		{
		_putchar(x);
		x++;
		}
		_putchar('\n');
	}
	return ();
}
