#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @buf: buffer to print
 * @size: size of the buffer
 * Return: void
 */

void print_buffer(char *buf, int size)
{
	int offset, byte_count, idx;

	offset = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (offset < size)
	{
		byte_count = size - offset < 10 ? size - offset : 10;
		printf("%08x: ", offset);
		for (idx = 0; idx < 10; idx++)
		{
			if (idx < byte_count)
				printf("%02x", *(buf + offset + idx));
			else
				printf("  ");
			if (idx % 2)
			{
				printf(" ");
			}
		}
		for (idx = 0; idx < byte_count; idx++)
		{
			int char_val = *(buf + offset + idx);

			if (char_val < 32 || char_val > 132)
			{
				char_val = '.';
			}
			printf("%c", char_val);
		}
		printf("\n");
		offset += 10;
	}
}
