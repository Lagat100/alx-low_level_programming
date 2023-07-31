#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: double pointer o list to be freed
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *head = *head;
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
	*head = NULL;
}