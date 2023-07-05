#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - gives the power of a number raised to a number
 * @x: input number to be used
 * @y: number to be raised to
 * return: result of the power
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
