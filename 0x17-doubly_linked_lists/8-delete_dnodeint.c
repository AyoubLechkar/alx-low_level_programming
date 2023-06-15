#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at given index in a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	temp = current;
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(temp);

	return (1);
}
