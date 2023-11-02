#include "hash_tables.h"
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
