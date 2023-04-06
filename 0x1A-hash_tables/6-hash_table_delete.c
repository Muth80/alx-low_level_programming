#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *temp;

	if (ht == NULL)
		return;

	/* Free all nodes in each bucket */
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			temp = current_node;
			current_node = current_node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	/* Free the array and the hash table itself */
	free(ht->array);
	free(ht);
}
