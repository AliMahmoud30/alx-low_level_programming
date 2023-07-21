#include "main.h"
/**
 * print_numbers - print the numbers, from 0 to 9, followed by a new line.
 *
 */
void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i + 48);
		putchar('\n');
	}
}

