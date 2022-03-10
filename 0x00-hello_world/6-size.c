#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(voip)
{
	char charType;
	int integertype;
	long int Type;
	long long int doubleType;
	float floatType;

	printf("Size of a char: %i byte(s)\n", sizeof(charType));
	printf("Size of an int: %i byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %i byte(s)\n", sizeof(Type));
	printf("Size of a long long int: %i byte(s)\n", sizeof(doubleType));
	printf("Size of a float: %i byte(s)\n", sizeof(floatType));
	return (0);
}
