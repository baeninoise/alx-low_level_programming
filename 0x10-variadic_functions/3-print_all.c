#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string between numbers
 * @n: number of parameters received
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list strings;

	va_start(strings, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%s%s", separator, va_arg(strings, char));

		if (!separator)
		{
			printf("%s", nil);
		}
	}
	va_end(strings);
	printf("\n");
}
