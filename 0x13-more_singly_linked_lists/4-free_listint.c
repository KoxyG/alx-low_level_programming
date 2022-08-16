#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: the linked list
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}

}
