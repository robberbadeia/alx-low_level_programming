#include "hash_tables.h"
/**
 *hash_table_print - Function
 *@ht: input
 *Return: None
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	/*Iputs Checks*/
	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("{");
			printf("'%s': '%s',", ht->array[i]->key, ht->array[i]->value);
			printf("}\n");
		}
	}
}
