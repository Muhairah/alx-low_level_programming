
#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{

	int r;
	int z;

	for (r = 0; r < 8; r++)
	{

		for (z = 0; z < 8; z++)
			_putchar(a[r][z]);
		_putchar('\n');
	}
}
