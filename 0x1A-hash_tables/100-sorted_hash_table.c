#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * *shash_table_create - function that create table
 * @size: an array variable
 * Return: ht
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}
/**
 * shash_node_insert -fucntion that inserts node
 * @ht: pointer to an array variable ht
 * @new_node: pointer to an array variable new_node
 * Return: nothing
 */
void shash_node_insert(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
		return;
	}
	current = ht->shead;
	while (current != NULL)
	{
		if (strcmp(new_node->key, current->key) < 0)
		{
			if (current->sprev != NULL)
				current->sprev->snext = new_node;
			else
				ht->shead = new_node;
			new_node->sprev = current->sprev;
			new_node->snext = current;
			current->sprev = new_node;
			return;
		}
		if (current->snext == NULL)
		{
			current->snext = new_node;
			new_node->sprev = current;
			new_node->snext = NULL;
			ht->stail = new_node;
			return;
		}
		current = current->snext;
	}
}
/**
 * shash_table_set - function that sets table
 * @ht: pointer to an array ht
 * @key: pointer to an array key
 * @value: pointer to an array value
 * Return: 1 success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	shash_node_insert(ht, new_node);
	return (1);
}
/**
 * *shash_table_get - function that is used to get table
 * @ht: pointer to an array ht
 * @key: pointer to an array key
 * Return: NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	/* Search for the key in the linked list at the specified index */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	/* Key not found */
	return (NULL);
}
/**
 * shash_table_print - function that prints table
 * @ht: pointer to an array variable ht
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function that print reversed table
 * @ht: pointer to an array ht
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - function that deletes the table
 * @ht: pointer to an array ht
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
