#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @args_count: number of arguments
 * @args_values: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int args_count, char *args_values[])
{
	int total_amt, i, coin_count;
	int denominations[] = {25, 10, 5, 2, 1};

	if (args_count != 2)
	{
		printf("Error\n");
		return (1);
	}

	total_amt = atoi(args_values[1]);
	coin_count = 0;

	if (total_amt < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && total_amt >= 0; i++)
	{
		while (total_amt >= denominations[i])
		{
			coin_count++;
			total_amt -= denominations[i];
		}
	}
/* Assuming there's more code below to handle the rest of the logic */
}
