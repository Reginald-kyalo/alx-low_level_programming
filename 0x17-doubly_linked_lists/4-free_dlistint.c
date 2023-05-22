#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head of list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	while (head)
	{
		free(head);
		head = head->next;
	}
}
