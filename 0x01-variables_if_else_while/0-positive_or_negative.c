#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 1 if success.
 */
int main(void)
{
	write("and that piece of art is useful - Dora Korpar, 2015-10-19\n");
	return (1);
}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point for program
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
