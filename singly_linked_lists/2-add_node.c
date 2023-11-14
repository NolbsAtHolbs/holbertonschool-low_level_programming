#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string
 * @next: points to next node
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: current place in list
  * @str: string to add to head
  * Return: pointer to current position in list
  */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));

	if (content == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		{
		content[i] = str[i];
		}
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
