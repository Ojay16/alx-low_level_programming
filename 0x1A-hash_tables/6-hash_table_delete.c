#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table.
 * @ht: Thr pointer to d hash table to be deleted.
 * Return: No return.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int j = 0;

	if (ht == NULL)
		return;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			while (ht->array[j])
			{
				current = ht->array[j];
				free(current->key);
				free(current->value);
				ht->array[j] = ht->array[j]->next;
				free(current);
			}
		}
	}
	free(ht->array);
	free(ht);
}
