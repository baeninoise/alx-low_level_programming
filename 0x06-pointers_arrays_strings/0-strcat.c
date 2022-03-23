#include "main.h"
#include <stdio.h>
/**
 * 0-strcat.c - concatenates two strings
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]!='\0'; i++)
	{
		for (j = 0; src[j]!='\0'; j++; i++)
		{
		dest[i] = src[j];
		}
	}
}
return(dest);
