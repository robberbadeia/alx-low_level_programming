#include "hash_tables.h"
/**
 * key_index - Function
 * @key: input
 * @size: input
 * Return: int
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
