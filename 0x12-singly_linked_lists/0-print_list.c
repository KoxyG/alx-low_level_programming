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
	const list_t *p = h;

	while (p->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("%d %s\n", 0, "nil");
		}
		else

			printf("%d", p->len);
				p = p->next;
			node++;
	}
	return (node);
}
