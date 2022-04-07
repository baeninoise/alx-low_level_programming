#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;
	
	if(nmemb == 0 || size == 0)
		returns (NULL);

	mem = malloc(nmemb * size);

	if (!mem)
		return(NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		mem[i] = 0;
	}

	return(mem);
}
