#include "main.h"
#include <stdio.h>
/**
 * _memset -  fills memory with a constant byte
 * @b: menber
 * @s: menber
 * @n: menber
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
	int i;

	for (i = 1, i<= n, i++)
		*s[i] = b;
return(*s)
