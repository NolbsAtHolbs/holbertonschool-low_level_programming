#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* print_dlistint - prints all the elements of a doubly linked list
* @h: head of linked list
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *currentNode = h;
	size_t nodeCount = 0;

	while (currentNode != NULL)
    {
		printf("%d\n", currentNode->n);
		currentNode = currentNode->next;
		nodeCount++;
	}
	return (nodeCount);
}