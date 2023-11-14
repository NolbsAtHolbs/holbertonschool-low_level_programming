#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: first node in linked list
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *hold;

	if (*head == NULL)
	{
		return (0);
	}
	hold = *head;
	num = hold->n;
	*head = hold->next;
	free(hold);

	return (num);
}
