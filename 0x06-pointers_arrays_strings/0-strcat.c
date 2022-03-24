#include "main.h"
#include <string.h>

/**
* *_strcat - concatenates two strings
* and return a pointer to the resulting string
* @*dest: The first character
* @*src: the second character to be concatenated
*
* Return: returns zero
*/

char *_strcat(char *dest, char *src)
{
	strcat(&dest, &src);
	return(*dest);
}
