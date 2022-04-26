#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	register size_t num = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
