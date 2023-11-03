#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str) 
{
    unsigned long int hash;
    int c;
    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}

/* Define the hash table and node structures */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/* Function to create a new hash table */
hash_table_t *create_hash_table(unsigned long int size)
{
    hash_table_t *new_table;
    unsigned long int i;

    new_table = malloc(sizeof(hash_table_t));
    if (!new_table)
        return (NULL);

    new_table->size = size;
    new_table->array = malloc(sizeof(hash_node_t *) * size);
    if (!new_table->array)
    {
        free(new_table);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    return (new_table);
}

/* Function to insert a key-value pair into the hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node;
    hash_node_t *current;

    if (!ht || !key || !value)
        return (0);

    index = hash_djb2((unsigned char *)key) % ht->size;

    /* Check if the key already exists and update the value if so */
    current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            if (!current->value)
                return (0);
            return (1);
        }
        current = current->next;
    }

    /* Create a new node and insert it at the beginning of the linked list */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

/* Function to retrieve the value associated with a key from the hash table */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *current;

    if (!ht || !key)
        return (NULL);

    index = hash_djb2((unsigned char *)key) % ht->size;
    current = ht->array[index];

    while (current)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->next;
    }

    return (NULL); /* Key not found */
}

/* Function to free the memory used by the hash table */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *current, *temp;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current)
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

int main(void)
{
    hash_table_t *ht;
    char *value;

    /* Create a hash table with a size of 1024 */
    ht = create_hash_table(1024);
    if (!ht)
    {
        fprintf(stderr, "Failed to create hash table\n");
        return (EXIT_FAILURE);
    }

    /* Insert key-value pairs into the hash table */
    hash_table_set(ht, "name", "John");
    hash_table_set(ht, "age", "30");
    hash_table_set(ht, "city", "New York");

    /* Retrieve values based on keys */
    value = hash_table_get(ht, "name");
    if (value)
        printf("Name: %s\n", value);
    else
        printf("Name not found\n");

    value = hash_table_get(ht, "age");
    if (value)
        printf("Age: %s\n", value);
    else
        printf("Age not found\n");

    value = hash_table_get(ht, "city");
    if (value)
        printf("City: %s\n", value);
    else
        printf("City not found\n");

    /* Clean up and free memory */
    hash_table_delete(ht);

    return (EXIT_SUCCESS);
}
