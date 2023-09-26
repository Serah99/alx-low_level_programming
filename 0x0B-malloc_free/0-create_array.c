#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of given size and assign specified char
 * @array_size: size of the array
 * @init_char: char to initialize array with
 * Description: create array of given size and initialize it with init_char
 * Return: pointer to the array, NULL if an error occurs
 */
char *create_array(unsigned int array_size, char init_char)
{
	char *array_ptr;
	unsigned int idx;

	array_ptr = malloc(sizeof(char) * array_size);
	if (array_size == 0 || array_ptr == NULL)
		return (NULL);

	for (idx = 0; idx < array_size; idx++)
		array_ptr[idx] = init_char;
	return (array_ptr);
}
