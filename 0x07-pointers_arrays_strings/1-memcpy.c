#include "main.h"

/**
 * copy_mem - Function to copy memory region.
 * @d: Target memory location.
 * @s: Source memory location.
 * @count: Bytes to copy.
 *
 * Return: Pointer to target memory location.
 */
char *copy_mem(char *d, char *s, unsigned int count)
{
	unsigned int idx = 0;

	while (idx < count)
	{
		d[idx] = s[idx];
		idx++;
	}
	return (d);
}
