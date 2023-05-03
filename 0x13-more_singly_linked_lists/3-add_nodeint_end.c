#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - Adds new nodes to the end of the list
  * @head: Pointer to the current position in the list
  * @n: Integer value to add to the list
  * Return: Pointer to the updated position in the list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_node;
	return (*head);
}
