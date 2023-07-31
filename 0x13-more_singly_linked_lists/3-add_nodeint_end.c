#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a node at the end of the list.
 * @head: double pointer
 * @n: integer
 *
 * Description: singly linked list node structure
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_node(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		listint_t *firstNode = *head;

		while (firstNode->next != NULL)
		{
			firstNode = firstNode->next;
		}
		firstNode->next = new_node;
	}

	return (new_node);
}
