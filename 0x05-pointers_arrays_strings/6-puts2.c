#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string starting with the first character
 * @str: string holding characters
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
