#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @arg_count: number of arguments
 * @arg_values: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int arg_count, char *arg_values[])
{
	int amount, idx, coinTotal;
	int denominations[] = {25, 10, 5, 2, 1};

	if (arg_count != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(arg_values[1]);
	coinTotal = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (idx = 0; idx < 5 && amount >= 0; idx++)
	{
		while (amount >= denominations[idx])
		{
			coinTotal++;
			amount -= denominations[idx];
		}
	}

	printf("%d\n", coinTotal);
	return (0);
}
