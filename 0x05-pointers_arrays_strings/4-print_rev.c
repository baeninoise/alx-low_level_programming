#include "main.h"
#include <stdio.h>
/**
 * print_rev -  prints a string in reverse, followed by a new line
 * @str: menber
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i;
	int t;

	t = _strlen(s);
	for (i = t-1 ; s[i] >= 0 ; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
