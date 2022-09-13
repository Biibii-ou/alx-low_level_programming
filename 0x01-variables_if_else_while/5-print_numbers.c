#include <stdio.h>
/**
 * main - Start the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i = i++)
	{
		printf('%d', i);
	}
	print("\n");
	return (0);
}
