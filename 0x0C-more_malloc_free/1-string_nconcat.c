#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char 
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	char *s3;
	int len1;
	int len2;
	
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	else
	s3 = malloc(sizeof(char) * (len1 + n + 1));

	if (!s)
	return (NULL);

	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s3[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s3[i++] = s2[j++];

	s3[i] = '\0';

	return (s3);
}
