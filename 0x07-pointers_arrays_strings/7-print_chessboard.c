#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 9; i++)
	{
		for (; j < 9; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
