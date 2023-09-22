#include "main.h"

/**
 * print_chessboard - Display a chessboard.
 * @board: 2D array representing the chessboard.
 * Return: Nothing.
 */
void print_chessboard(char (*board)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(board[row][col]);
		_putchar('\n');
	}
}
