#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Return: the address of the new element, or NULL if it failed
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

listint_t* add_nodeint(listint_t** head, const int n) 
{
	listint_t* new_node = (listint_t*)malloc(sizeof(listint_t));
	if (new_node == NULL) 
    	{
		return NULL;
    	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
