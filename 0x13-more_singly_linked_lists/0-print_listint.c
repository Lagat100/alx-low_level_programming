#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Return: the number of nodes
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const struct listint_t* head)
{
	size_t count = 0;
	const struct listint_t* current = head;

	while (current != NULL)
	{
	printf("%d -> ", current->n);
	current = current->next;
	count++;
	}

	printf("NULL\n");
	
	return count;
}
