#include <string.h>
#include "main.h"

/**
 * *_strncpy - function copies string
 * @dest: first pointer to a char
 * @src: second pointer to a char
 * @n: number of byte
 * Return: return value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(*dest, *src, n);
	return(dest);
}
