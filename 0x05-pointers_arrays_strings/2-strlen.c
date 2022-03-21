#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reset_to_98 - returns the length of a string
 * @s: menber
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}
