#include "hash_tables.h"

/**
 * hash_table_set - This function adds an element to the hash table.
 * @ht: The pointer to hash table you want to add or update the key/value to.
 * @key: The pointer to the key and cannot be an empty string.
 * @value: pointer to the value is d value associated with the key.
 *
 *  value can be an empty string.
 * In case of collision, add the new_node node at the beginning of the list.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *current_node = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[i];

	for (; current_node != NULL; current_node = current_node->next)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			if (strcmp(current_node->value, value) != 0)
			{
				free(current_node->value);
				current_node->value = strdup(value);
			}
		return (1);
		}
	}

	new_node = _node_(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}


/**
 * _node_ - This function creates a new_node node.
 * @key: pointer to key.
 * @value: pointer to key value.
 *
 * Return: pointer to new_node else NULL.
 */
hash_node_t *_node_(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}
