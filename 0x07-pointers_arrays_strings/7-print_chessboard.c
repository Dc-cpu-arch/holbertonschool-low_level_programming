#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to the chessboard
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
	int fila, colum;

	for (fila = 0; fila < 8; fila++)
	{
		for (colum = 0; colum < 8; colum++)
		{
			_putchar(a[fila][colum]);
		}
		_putchar('\n');
	}
}
