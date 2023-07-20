#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_string: prints strings, followed by a new line.
 * @n: number of strings passed to the function
 * @*separator: string to be printed between the strings
 * @...: variable arguments to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	va_start(str, n);
	for(i = 0; i < n; i++)
	{
		if (i != (n - 1), *separator != NULL && str == NULL)
			printf(%s, separator, nil);
	}
	printf(\n);
	
	va_end(str);
}
