#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table.
 * @ht: The pointer to d hash table to be printed.
 * Return: No return.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *test;
	unsigned long int j = 0, o = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (j = o; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			test = ht->array[j];
			while (test)
			{
				printf("%s'%s': '%s'", o == 0 ? "" : ", ",
					   test->key, test->value), o++;
				test = test->next;
			}
		}
	}
	printf("}\n");
}
