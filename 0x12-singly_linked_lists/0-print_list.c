#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list, head.
 *
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("%d %s\n", 0, "nil");
		}
		else

			printf("%d", h->len);
				h = h->next;
			node++;
	}
	return (node);
}
