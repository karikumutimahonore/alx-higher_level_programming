#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: a pointer to the head node
 * @number: the number to insert
 *
 * Return: the address of the new node on success, else NULL on failure
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = number;
	current = *head;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	if (node->n < (*head)->n)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (current->next != NULL && node->n > current->next->n)
		current = current->next;

	node->next = current->next;
	current->next = node;

	return (node);
}
