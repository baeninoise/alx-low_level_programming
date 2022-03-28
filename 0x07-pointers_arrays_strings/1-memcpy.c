#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: pointer to the memory area
 * @n: bytes of memory
 * @dest: memory area
 *
 * Return: the memory area 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	while(i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
