#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 *	only using _putchar twice.
 * @n: number of times the character \ should be printed.
 * Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int pos, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (pos = 1; pos <= n; pos++)
		{
			for (space = 1; space < pos; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

