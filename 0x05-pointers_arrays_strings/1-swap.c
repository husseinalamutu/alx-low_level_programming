#include "main.h"

/* swap_int - a function that swaps the value of two int
 * @a: first pointer variable
 * @b: second pointer variable
 * Return: always return 0
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}

