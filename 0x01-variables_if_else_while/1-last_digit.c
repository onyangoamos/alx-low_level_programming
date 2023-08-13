#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the last digit of a number stored in a variable
 * Return: (0) (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int ld;

	ld = n % 10;

	if (ld > 50)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("last digit %d is %d and less than 6 and not 0\n", n, ld);
	}
	return (0);
}
