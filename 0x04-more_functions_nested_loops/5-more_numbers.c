#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line. 
 *		only using _putchar twice
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int x = 0;
	int y = 0;
	
	for (y = 0; y <= 10; y++)
  	{
    		for (x = 0; x <= 14; x++)
		{
			_putchar(x + 48);
		}
		_putchar('\n');
	}
}