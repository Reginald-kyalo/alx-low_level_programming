#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head of list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head->prev != NULL)
	{
		head = head->prev;
	}
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
