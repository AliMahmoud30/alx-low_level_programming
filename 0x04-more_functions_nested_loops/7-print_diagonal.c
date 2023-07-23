#include "main.h"
/**
 * more_numbers - prints 10 times the numbers.
 *      from 0 to 14, followed by a new line.
 *      only using _putchar twice
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
