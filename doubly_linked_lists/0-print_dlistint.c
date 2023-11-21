#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements
 * @h: head of linked list
 * return: number of nodes
 */
 size_t print_dlistint(const dlistint_t *h)
 {
    const dlistint_t *currentNode = h;
    size_t nodeCount = 0;

    while (currentNode != NULL)
    {
        printf("%d\n", current->n);
        currentNode = current->next;
        nodeCount++;
    }
    return (nodeCount)
 }