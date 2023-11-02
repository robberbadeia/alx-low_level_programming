#include "hash_tables.h"
/**
 * hash_table_create - Function
 * @size: input
 * Return: pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	/*Input Checks*/
	if (!size)
		return (NULL);

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;

	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	return (table);
}
