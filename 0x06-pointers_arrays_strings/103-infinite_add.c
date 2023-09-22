#include "main.h"

/**
 * rev_string - reverse a string
 * @str: string to reverse
 * Return: void
 */

void rev_string(char *str)
{
	int start = 0;
	int end = 0;
	char holder;

	while (*(str + end) != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		holder = *(str + start);
		*(str + start) = *(str + end);
		*(str + end) = holder;
		start++;
		end--;
	}
}

/**
 * infinite_add - add two large numbers
 * @num1: first number string
 * @num2: second number string
 * @res: result buffer
 * @buf_size: buffer size
 * Return: pointer to the result string
 */

char *infinite_add(char *num1, char *num2, char *res, int buf_size)
{
	int carry = 0, len1 = 0, len2 = 0, total_digits = 0;
	int digit1 = 0, digit2 = 0, temp_sum = 0;

	while (*(num1 + len1) != '\0')
		len1++;
	while (*(num2 + len2) != '\0')
		len2++;
	len1--;
	len2--;

	if (len2 >= buf_size || len1 >= buf_size)
		return (0);

	while (len1 >= 0 || len2 >= 0 || carry == 1)
	{
		digit1 = (len1 < 0) ? 0 : *(num1 + len1) - '0';
		digit2 = (len2 < 0) ? 0 : *(num2 + len2) - '0';
		temp_sum = digit1 + digit2 + carry;

		carry = (temp_sum >= 10) ? 1 : 0;

		if (total_digits >= (buf_size - 1))
			return (0);

		*(res + total_digits) = (temp_sum % 10) + '0';
		total_digits++;
		len1--;
		len2--;
	}

	if (total_digits == buf_size)
		return (0);

	*(res + total_digits) = '\0';
	rev_string(res);

	return (res);
}
