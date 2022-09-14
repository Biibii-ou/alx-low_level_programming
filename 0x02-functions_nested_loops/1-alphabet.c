#include "main.h"

/**
 * print_alphabet - Display alphabets in lower case
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		_putchar(alphab);
	}

	_putchar('\n');
}
