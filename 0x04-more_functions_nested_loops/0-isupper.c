#include "main.h"
/**
* isupper - check upper case letter
*
*/
int _isupper(int c)
{
	if( (c >= 'A') && (c <= 'Z') ) 
	{
		return 1;	
	}
	else
	{
		return 0;
	}
}
