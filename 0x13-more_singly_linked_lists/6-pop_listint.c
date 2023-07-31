#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes th head of a node in a list
 * @head: double pointer to the list to be deleted
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	int list = (*head)->n;
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (list);
}
