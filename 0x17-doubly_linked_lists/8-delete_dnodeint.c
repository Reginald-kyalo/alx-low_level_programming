#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: head of the list
 * @index: position of the node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}

	while (index != 1)
	{
		if ((*head)->next == NULL)
			return (-1);
		*head = (*head)->next;
		index--;
	}
	if (*head != NULL)
	{
		(*head)->prev->next = (*head)->next;
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = (*head)->prev;
		}
	}
	free(*head);
	return (1);
}
