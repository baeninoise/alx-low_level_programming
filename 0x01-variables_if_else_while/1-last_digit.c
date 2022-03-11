#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <inttypes.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 **/
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	l = n % 10;
	scanf("%d", &l);
	if (l > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n,l);
	}
	else if (l == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
