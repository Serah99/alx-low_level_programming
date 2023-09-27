#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @mem_block: pointer to the memory previsouly allocated by malloc
 * @prev_size: size of the allocated memory for mem_block
 * @next_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *mem_block, unsigned int prev_size, unsigned int next_size)
{
	char *new_block;
	char *old_block;
	unsigned int idx;

	if (next_size == prev_size)
		return (mem_block);

	if (next_size == 0 && mem_block)
	{
		free(mem_block);
		return (NULL);
	}

	if (!mem_block)
		return (malloc(next_size));

	new_block = malloc(next_size);
	if (!new_block)
		return (NULL);

	old_block = mem_block;

	if (next_size < prev_size)
	{
		for (idx = 0; idx < next_size; idx++)
			new_block[idx] = old_block[idx];
	}

	if (next_size > prev_size)
	{
		for (idx = 0; idx < prev_size; idx++)
			new_block[idx] = old_block[idx];
	}

	free(mem_block);
	return (new_block);
}
