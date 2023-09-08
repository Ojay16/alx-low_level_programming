#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: The pointer to hash table to look at.
 * @key: pointer to key to search for.
 * Return: value associated with element,  OR  NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int j = 0;
	hash_node_t *temp_var;

	if (ht == NULL || key == NULL)
		return (NULL);

	j = key_index((const unsigned char *)key, ht->size);
	temp_var = ht->array[j];

	for (; temp_var != NULL; temp_var = temp_var->next)
	{
		if (strcmp(temp_var->key, key) == 0)
			return (temp_var->value);
	}
	return (NULL);
}
