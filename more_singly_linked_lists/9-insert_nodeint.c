#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: first node of linked list
  * @idx: location of the node to delete
  * Return: address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
{
	unsigned int i;
	listint_t *current, *subsequent;

	if ((!head) || (!(*head)))
	{
		return (-1);
	}
	current = *head;

	if (idx == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		current = current->next;

		if (current == NULL)
		{
			return (-1);
		}
	}
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);
}
