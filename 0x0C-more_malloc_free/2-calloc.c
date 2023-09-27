#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @elem_count: type unsigned int
 * @elem_size: type unsigned int size of elements
 * Return: null when faild
 */
void *_calloc(unsigned int elem_count, unsigned int elem_size)
{
	void *memory = NULL;
	char *temp_array;
	unsigned int iterator;

	if (elem_count <= 0 || elem_size <= 0)
	{
		return (memory);
	}

	memory = malloc(elem_count * elem_size);

	if (memory == 0)
	{
		return (NULL);
	}

	temp_array = (char *)memory;

	for (iterator = 0; iterator < (elem_count * elem_size); iterator++)
	{
		*(temp_array + iterator) = 0;
	}

	return (temp_array);
}
