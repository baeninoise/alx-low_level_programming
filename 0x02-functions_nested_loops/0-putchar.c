#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char txt[9] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(txt[i]);
	}
	return (0);
}
