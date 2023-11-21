#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* dlistint_len - returns the number of elements in a linked dlistint_t list
* @h: head of linked list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *currentNode = h;
	size_t nodeCount = 0;

	while (currentNode != NULL)
	{
		currentNode = currentNode->next;
		nodeCount++;
	}
	return (nodeCount);
}
