#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present in the list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);

	express = list;
	while (express)
	{
		if (express->n >= value)
			break;
		if (express->express == NULL)
		{
			current = express;
			while (current->next)
				current = current->next;
			printf("Value found between indexes [%lu] and [%lu]\n",
					express->index, current->index);
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n",
				express->express->index, express->express->n);
		express = express->express;
	}

	if (express)
	{
		current = express;
		while (current)
		{
			printf("Value checked at index [%lu] = [%d]\n",
					current->index, current->n);
			if (current->n == value)
				return (current);
			current = current->next;
		}
	}

	return (NULL);
}
