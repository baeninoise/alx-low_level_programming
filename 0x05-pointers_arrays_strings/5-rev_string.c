#include "main.h"
/**
 * rev_string - reverses a string
 * @s: holi
 *
 */
void rev_string(char *s)
{
int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
