#include <main.h>

/**
* isupper - check upper case letter
*@ parm: c charachter to check is upped case or not
*@ ret : if upper case return 1, otherwise return 0
*/
int _isupper(int c)
{
        if ((c >= 'A') && (c <= 'Z'))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
