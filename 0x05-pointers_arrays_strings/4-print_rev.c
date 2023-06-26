#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string in reverse followed by a new line
 * @s: string value to be reversed
 * author- @Lagat.K.W
 * return: void
 *
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	{
		while (a--);
			_putchar(s[a]);
	}
	_putchar("\n");
}
