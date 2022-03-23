#include "main.h"
#include <stdio.h>
/**
 * 2-strncpy.c - copies a string
 * @n: menber
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for(j = 0; src[j] != '\0'; i++; j++)
		if(j < n)
		{
		dest[i] = src[j];
		}
return(dest);
}
