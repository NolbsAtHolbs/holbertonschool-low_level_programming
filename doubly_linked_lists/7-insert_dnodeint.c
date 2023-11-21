#include <stdlib.h>
#include "lists.h"
/**
* insert_dnodeint_at_index - insrts new node @ givn positn in a dlistint_t list
* @h: double pointer to the head of the list
* @idx: index at which the new node should be inserted
* @n: integer data for the new node
* Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;

	*h = new_node;
	}
	else
	{
		current = *h;
		while (current != NULL && count < idx)
		{
			current = current->next;
			count++;
		}
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current;
		new_node->prev = current->prev;
		current->prev->next = new_node;
		current->prev = new_node;
	}
	return (new_node);
}
