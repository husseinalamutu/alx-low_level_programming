#include "main.h"

/**
 * swap_int: a function that swaps the value of two integers
 * @a: the first integer
 * @b: the second integer
 * hold: the variable that holds var a
 *
 * a short description
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
