#include "main.h"
/**
 * print_numbers - print 0 - 9
 *             only using _puthar twice
 *
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(i + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
