#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int x;
	int i;
	
	x = 0;
	while(x < 10)
	{
		for (i = 48; i < 58; i++)
		{
		_putchar(i);
		}
	x++;
	}
	_putchar('\n');
}
