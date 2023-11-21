#include "lists.h"
/**
* delete_dnodeint_at_index - deletes node at given index in a dlistint_t list
* @head: double pointer to the head of the list
* @index: index of the node to delete
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}
	current = *head;
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);

	temp = current;
	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(temp);
	return (1);
}
