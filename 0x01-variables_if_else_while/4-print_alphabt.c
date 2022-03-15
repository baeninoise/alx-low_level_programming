#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
<<<<<<< HEAD
	putchar(x);
	x++;
	if (x == 'e')
	{
	x++;
	}
	if (x == 'q')
	{
=======
	if (x != 'e' && x != 'q')
	putchar(x);
>>>>>>> 9e77ce81178baade2ec250b297c984cca819a8c4
	x++;
	}
	putchar('\n');
	}
	return (0);
}
