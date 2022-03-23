#include "main.h"
#include <stdio.h>
/**
 * 2-strncpy.c - copies a string
 * @n: menber
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n);
{
	int i;
	
	i = 0;
	while(i < n)
	{
	i++;
	}
	while(i < n && i >= 0)
	{
	printf("%d", a[i]);
		if (i == n - 1)
		{
		continue;
		}
	printf(", ");
	i--;
	}
}
