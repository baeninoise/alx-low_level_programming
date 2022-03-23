#include "main.h"
#include <stdio.h>
/**
 * 2-strncpy.c - compares two strings
 * @s1: menber
 * @s2: menber
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0')
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
