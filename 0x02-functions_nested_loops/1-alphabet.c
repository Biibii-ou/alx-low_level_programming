#include "main.h"

/**
 * main - check the code
 * Description: calls function _putchar to display alphabet
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
