#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: singly linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}