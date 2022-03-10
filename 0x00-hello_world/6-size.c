#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(voip)
{
	char charType;
	int integerType;
	long int longintType;
	long long int doubleType;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(doubleType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
