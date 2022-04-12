#include "main.h"
/**
 * main - entry point of the program
 *	takes in a single character
 *	and put it to stdout
 * Return: 0 success.
 */

int main(void)
{
	int i;
	i = 0;
	char word[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
