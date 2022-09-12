#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: to print negative, zero and positive
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("n = %d. hence n is positive\n", n);
	}
	else if (n == 0)
	{
		printf("n = %d. hence n is zero\n", n);
	}
	else
	{
		printf("is negative\n");
	}

	/* your code goes there */
	return (0);
}
