#include <stdio.h>
/**
 * main - Start the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z', i++;)
{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
