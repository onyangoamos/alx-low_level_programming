#include <stdio.h>
#include "main.h"
/**
 * main - Test function for positive or negative
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	if (i > 0)
	{
		printf("Positive: %d\n", i);
	}
	else if (i == 0)
	{
		printf("Is zero: %d\n", i);
	}
	else
		printf("Is negative: %d\n", i);
	return (0);
}
