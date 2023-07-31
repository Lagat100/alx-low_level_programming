#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - lists the length of nodes in a list
 * @head: double pointer
 * Return: number of elements
 * Description: singly linked list node structure
 *
 */

size_t listint_len(const struct listint_t *head)
{
	size_t count = 0;
	const struct listint_t *first = head;

	while (first != NULL)
	{
		count++;
		first = first->next;
	}

	return (count);
}
