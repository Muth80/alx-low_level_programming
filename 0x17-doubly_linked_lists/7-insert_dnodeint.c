/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added (starting from 0)
 * @n: value to be stored in the new node
 *
 * Return: pointer to the newly created node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* Special case for idx == 0 */
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* Traverse the list until we find the node at the given index */
	while (current_node != NULL && i < idx)
	{
		current_node = current_node->next;
		i++;
	}

	/* If we reached the end of the list and idx is not within range, return NULL */
	if (current_node == NULL && i < idx)
		return (NULL);

	/* Create a new node and insert it into the list */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current_node->prev;
	new_node->next = current_node;

	if (current_node->prev != NULL)
		current_node->prev->next = new_node;
	else
		*h = new_node;

	current_node->prev = new_node;

	return (new_node);
}
