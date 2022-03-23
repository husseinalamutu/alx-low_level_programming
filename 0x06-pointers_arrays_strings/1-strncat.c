#include <string.h>
#include "main.h"

/**
 * *_strcat - function commute strings
 * @dest: first pointer to a char
 * @src: second pointer to a char
 * @n: number of bytes
 * Return: return value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(*dest, *src, n);
	return(dest);
}
