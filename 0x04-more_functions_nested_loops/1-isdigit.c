#include <ctype.h>

/**
 * _isdigit - checks inputs made an determines
 *
 * whether the input is a digit or an alphabet
 *
 * @c: the input parameter of the _isdigit()
 *
 * Return: 1 as Success of a digit and 0 as alphabet
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
