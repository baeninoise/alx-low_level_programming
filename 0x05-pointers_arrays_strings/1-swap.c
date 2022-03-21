#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - takes a pointer to an int as parameter and updates
 * @a,b: menber
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
