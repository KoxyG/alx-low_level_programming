#include "lists.h"
/**
 * free_listint2 - a function that frees a linked list
 * @head: a linked list to be freed
 *
 * Returns: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;

}
