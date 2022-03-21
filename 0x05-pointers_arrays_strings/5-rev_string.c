#include "main.h"
/**
 * rev_string - reverses a string
 * @s: holi
 *
 */
void rev_string(char *s)
{
int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
	}
	for (j = i ; s[i] != '\0' ; j--)
	{
		_putchar(s[j]);
	}
}
