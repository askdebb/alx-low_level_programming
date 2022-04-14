#include <ctype.h>

/**
 * _isupper - checks input as upper
 * @c: input of a character using the getchar()
 * Return: 1 on sucess
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
