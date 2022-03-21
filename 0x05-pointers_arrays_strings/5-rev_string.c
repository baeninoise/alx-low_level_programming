#include "main.h"
#include <stdio.h>
/**
 * rev_string -  prints a string, followed by a new line
 * @s: menber
 *
 * Return: Always 0
 */
void rev_string(char *s)
	{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	_putchar('\n');
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
}
