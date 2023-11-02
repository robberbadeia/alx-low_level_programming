#include "hash_tables.h"
/**
 * hash_table_get - Function
 * @ht: input
 * @key: key
 * Return: pointer to value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	unsigned long int i = 0;

	/*Input Checks*/
	if (!ht || !key || *key == '\0')
	{
		return (NULL);
	}

	/*Creat Index for this key*/
	idx = key_index((const unsigned char *)key, ht->size);

	/*Check that index*/
	if (idx >= ht->size)
		return (NULL);

	/*Search for the key start from this index*/
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			return (ht->array[i]->value);
		}
	}
	return (NULL);
}
