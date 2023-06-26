#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps integers
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int h  = *a;
	int m  = *b;

	*a = m;
	*b = h;
}



