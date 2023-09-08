#include "hash_tables.h"

/**
 * key_index -This function returns the index of a key.
 * @key: pointer to the key to get the index.
 * @size: size of array of the hash table.
 * This function uses the hash_djb2 function writen earlier
 * Return: index at which the key/value pair should be stored in the,
 * array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
