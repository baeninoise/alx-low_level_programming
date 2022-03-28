#include "main.h"
/**
 * _memcpy - copies memory area
 * @s: menber
 * @c: menber
 * Return: a pointer to dest
 */
char *_strchr(char *s, char c);
{
	int i = 0;
	
	while(i <= '\0')
	{
		if (s[i] == c)
			return (c);
		else if(s[i] == '\0')
			return(NULL);
	i++;
	}
}
