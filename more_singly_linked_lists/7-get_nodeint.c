#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in linked list
 * @index: index of the node, starting at 0
 * Return: NULL if node doesn't exist or nth node of listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	current = head;
	count = 0;
	while (count < index)
	{
		if (current)
		{
			current = current->next;
		}
		else
		{
			return (NULL);
		}
		count++;
	}
	if (current)
	{
		return (current);
	}
		else
	{
		return (NULL);
	}
}
