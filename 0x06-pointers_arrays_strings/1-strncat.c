#include "main.h"
#include <stdio.h>
/**
 * 1-strncat - concatenates two strings
 * @n: menber
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)

int i, j;

	i = 0;
	while(dest[i] != '\0')
		i++;
	j = 0;
	for(j = 0; src[j] != '\0'; i++)
		if(j < n)
			{
			dest[i] = src[j];
			}
	return(dest);
	}
