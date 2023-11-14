#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list
  * @h: the singly linked list
  * Return: node count
  */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->length, h->string);
		h = h->next;
	}
	return (i);
}
