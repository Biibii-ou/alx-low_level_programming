#include "main.h"

/**
 * _islower - checks the lower case letter
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
