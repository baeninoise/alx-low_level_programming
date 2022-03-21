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
	int i;
	int j;
	int t;
	int l;

	while (s[i] != 0)
	{
		i++;
	}

	l = i;
	i = 0;
	j = l - 1;

	while (i < j)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i++;
		j--;
	}
}
