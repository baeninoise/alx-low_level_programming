#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: integer
 * @b: integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
int p;
	p = *a;
	*a = *b;
	*b = p;
}
