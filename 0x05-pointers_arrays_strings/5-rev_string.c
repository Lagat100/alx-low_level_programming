#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: string to print
 * Return: void
 */
void rev_string(char *s)
{
	int length, a, b;
	char me;


	for (length = 0; s[length] != '\0'; length++);
	a = 0;
	b = length / 2;

	while (b--)
	{
		me = s[length - a - 1];
		s[length - a - 1] = s[a];
		s[a] = me;
		a++;
	}
}

