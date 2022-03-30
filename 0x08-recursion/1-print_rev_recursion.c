#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: menber
 *
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	while(*s != '\0')
	{
		*s++;
		return ();
	}
	_putchar(*s);
	_puts_recursion(--s);
}
