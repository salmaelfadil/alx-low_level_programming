#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints chessboard
 * @a: array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 7; i++)
	{
		for (; j < 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
