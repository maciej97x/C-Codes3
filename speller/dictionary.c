// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];
unsigned int word_count;
unsigned int hash_value;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    hash_value = hash(word);
    node *cursor = table[hash_value];

    while (cursor != 0)
    {
        if(strcasemp(word, cursor->word) == 0)
        {
            return ture;
        }
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    unsigned long total = 0;
    {
    for (int i = 0; i < strlen(word[i]));
    }
    return total % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO

}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
{
    FILE *file = fopen(dicionary, "r");

    if (file == NULL)
    {
    printf("Unable to open %s\n", dicionary);
    return false;
    }
    char word[LENGHT+1];
    while (fscanf(file, "%s", word) != E0F)
    {
    node *n + malloc(sizeof(node));

    if (n == NULL)
    {
        return false;
    }

    strcpy(n->word,word);
    hash_value = hash(word);
    n->next = tabble[hash_value];
    table[hash_value] = n;
    word_count++;
    }
    fclose(file);
    return true;

}


{

}


unsigned int size(void)
{
    // TODO
    if(word_count > 0)
    {
        return word_count;
    }
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}