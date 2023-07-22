#include "main.h"
/**
 * more_numbers - prints 10 times the numbers.
 *	from 0 to 14, followed by a new line.
 *	only using _putchar twice
 * Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int x = 0;
	int y = 0;
	int num = 0;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			num = x;
			if (x > 9)
			{
				_putchar(1 + 48);
				num = x % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}

