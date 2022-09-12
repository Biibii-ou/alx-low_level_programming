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
		printf("n = %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("n = %d is zero\n", n);
	}
	else if (n < 0)
	{
<<<<<<< HEAD
		printf("n = %d is negative\n", n);
=======
		printf("n = %d is negative\n");
>>>>>>> 05340c4a22dfefe3d6db9cc2d6d9ae2d048bc62b
	}

	/* your code goes there */
	return (0);
}
