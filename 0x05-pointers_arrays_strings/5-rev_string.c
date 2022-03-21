#include "main.h"
/**
 * rev_string - reverses a string
 * @s: holi
 *
 */
void rev_string(char *s)
{
int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
}
