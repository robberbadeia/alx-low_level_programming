#include "hash_tables.h"
/**
 * creat_node - Function
 * @key: input
 * @value: input
 * Return: pointer to hash node
 *
*/
hash_node_t *creat_node(char *key, char *value)
{
	if (!key || !value)
		return (NULL);

	/*reserve a hash table item memory*/
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_node_t));

	item->key = (char *) malloc(sizeof(strlen(key) + 1));
	item->value = (char *) malloc(sizeof(strlen(value) + 1));

	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}
/**
 * hash_table_create - Function
 * @size: input
 * Return: pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	if (!size)
		return (NULL);

	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	table->size = size;

	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	/*Intialize all items of hash table*/
	for (int i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
