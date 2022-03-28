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
	unsigned int i;
	unsigned char *memory = s, value = b;
	for (i = 1, i<= n, i++)
		memory[i] = value;
return(memory)
