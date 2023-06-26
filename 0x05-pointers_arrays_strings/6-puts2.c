#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string starting with the first character
 * @str: string holding characters
 */
void puts2(char *str)
{
	int a = 0;
	
	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}

