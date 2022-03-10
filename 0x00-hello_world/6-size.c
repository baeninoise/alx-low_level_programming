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
	long long doubleType;
	float floatType;
    
	printf("Size of a char: %ld byte(s)\n",sizeof(charType));
	printf("Size of an int: %ld byte(s)\n",sizeof(integerType));
	printf("Size of a long long: %ld byte(s)\n",sizeof(doubleType));
	printf("Size of a long long: %ld byte(s)\n",sizeof(longintType));
	printf("Size of a float: %ld byte(s)\n",sizeof(floatType));
	return 0;
}
