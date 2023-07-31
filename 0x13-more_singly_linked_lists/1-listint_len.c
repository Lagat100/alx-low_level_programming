#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Return: number of elements
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t listint_len(const struct listint_t* head) 
{
	size_t count = 0;
	const struct listint_t* first = head;

	while (first != NULL) 
    	{
		count++;
		first = first->next;
    	}

	return count;
}
