#include "main.h"
/**
 * main - entry point of the program
 *
 *	takes in a single character in a word
 *
 *	and puts it to stdout
 *
 * Return: 0 success.
 */

int main(void)
{
	char word[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
