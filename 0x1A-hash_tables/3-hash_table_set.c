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

	/*Input Checks*/
	if (!key || !ht || !value)
	{
		return (0);
	}

	val = strdup(value);
	if (val == NULL)
	{
		return (0);
	}
	/*Creat index usin hash function*/
	idx = key_index((const unsigned char *)key, ht->size);

	/*Check if the array in that index contain yhat key and if key exist the update the value and return*/
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(key , ht->array[i]->key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}
	/*if the key is not found then we will need to creat hash node for that index*/
	new = malloc(sizeof(hash_node_t));
	if(!new)
	{
		free(val);
		return (0);
	}
	/*if the node created start to duplicate the key*/
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	/*if key updated then start to insert the value to the node*/
	new->value = val;

	/*Add node first*/
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return(1);
}