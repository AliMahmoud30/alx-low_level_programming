#include "main.h"
/**
 * _isdigit - Check if the given character is a digit.
 * @c: Character to be tested
 *
 * Return: 1 if uppercase else 0 (False)
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

