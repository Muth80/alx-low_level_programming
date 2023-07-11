#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using the
 * Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not found or list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev, idx;
	listint_t *current;

	if (list == NULL)
		return (NULL);

	step = sqrt(size);
	prev = 0;
	current = list;

	while (current != NULL && current->n < value)
	{
		prev = current->index;
		idx = prev + step;
		printf("Value checked at index [%lu] = [%d]\n", idx, current->n);

		while (current->next != NULL && current->index < idx)
			current = current->next;

		if (current->next == NULL)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, current->index);

	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

	while (current != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
