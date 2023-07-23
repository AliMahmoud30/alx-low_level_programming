#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed
 * only using _putchar twice
 * Return: Always 0 (Success)
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
