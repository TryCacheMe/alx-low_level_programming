#include "lists.h"
#include <stdio.h>

/**
  print_list - Print elements of lists_t list
  @l: the list_t l.
  Return: number of nodes in l
*/
size_t print_list(const list_t *l)
{
	size_t nodes = 0;

	while (l)
	{
		if (l->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", l->len, l->str);
		nodes++;
		l = l->next;
	}
	return (nodes);
}
