#include "lists.h"

/**
 * check_cycle - checks for loops / cycles in a list
 * @list: the list to check
 *
 * Return: 0 if there is no cycle, else 1 when a cycle is found
 */
int check_cycle(listint_t *list)
{
	listint_t *slow_ptr, *fast_ptr;

	if (list == NULL)
		return (0);

	slow_ptr = fast_ptr = list;

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;

		if (fast_ptr == slow_ptr)
			return (1);
	}

	return (0);
}
