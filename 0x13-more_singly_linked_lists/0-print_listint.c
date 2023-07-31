#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints the list of elements
 * @head: double pointer
 *
 * Return: the number of nodes
 * Description: singly linked list node structure
 *
 */

size_t print_listint(const struct listint_t *head)
{
	size_t count = 0;
	const struct listint_t *current = head;

	while (current != NULL)
	{
	printf("%d -> ", current->n);
	current = current->next;
	count++;
	}

	printf("NULL\n");

	return (count);
}
