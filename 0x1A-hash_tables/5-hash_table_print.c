#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: input
 * Description: Key/value pairs are printed in the order
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned char c_flag = -1;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);

				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
