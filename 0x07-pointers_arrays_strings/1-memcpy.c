#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to the memory area
 * @n: bytes of memory
 * @b: constant byte
 *
 * Return: the memory area of s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	while(i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest)
}
