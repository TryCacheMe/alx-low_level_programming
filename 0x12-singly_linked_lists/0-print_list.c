#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print elements of lists_t list
 * @h: the list_t l.
 * Return: number of nodes printedi
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
