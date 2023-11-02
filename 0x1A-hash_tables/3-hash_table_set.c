#include "hash_tables.h"
/**
 * hash_table_set - Function
 * @ht: input
 * @key: input
 * @value: input
 * Return: int
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	unsigned long int i = 0;
	hash_node_t *new;
	char *val;

	if (!key || !ht || !value)/*Input Checks*/
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(val);
		return (0);
	}
	new->key = strdup(key);/*if the node created start to duplicate the key*/
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val;/*if key updated then start to insert the value to the node*/
	new->next = ht->array[idx];/*Add node first*/
	ht->array[idx] = new;
	return (1);
}
