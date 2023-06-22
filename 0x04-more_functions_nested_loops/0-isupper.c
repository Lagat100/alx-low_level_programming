iinclude "main.h"
#include <stdio.h>
/**
 * _isupper - main function
 *
 * @c: comparison character
 *
 * Return: 1 if true, 0 if false
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
