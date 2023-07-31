#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a node at the end of the list
 * @head: double pointer.
 * @n: integer used
 * Return: the address of the new element, or NULL if it failed
 * Description: singly linked list node structure
 *
 */

listint_t *add_node(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
