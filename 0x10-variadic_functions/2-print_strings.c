#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: delimiter
 * @n: n args
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *clone;

	va_start(ap, i);

	for(i = 0; i < n; i++)
	{
		clone = va_arg(ap, char*);
		if(clone != NULL)
			printf("%s", clone);
		else
			printf("%p", clone);
		if(seperator != NULL && i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}

	
