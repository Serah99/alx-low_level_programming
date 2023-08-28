#include "main.h"

/**
 * _memcpy - Copies a memory segment.
 * @tgt: Target memory segment.
 * @org: Original memory segment to copy from.
 * @bytes: Quantity of bytes to copy.
 *
 * Return: Pointer to the target memory segment.
 */
char *_memcpy(char *tgt, char *org, unsigned int bytes)
{
	int k = 0;
	int j = bytes;

	for (; k < j; k++)
	{
		tgt[k] = org[k];
		bytes--;
	}
	return (tgt);
}
