#include <stdio.h>
/**
 * main - A program that prints the size of computers it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int e;
	long long int d;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
