#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: menber
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	int i;

	if(i != '0')
	{
	_putchar(s[i]);
	i++;
	}
	_puts_recursion(s);
}
