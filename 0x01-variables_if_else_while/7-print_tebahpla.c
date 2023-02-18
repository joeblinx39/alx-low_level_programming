#include <stdio.h>

/**
 * main - Entry point
 *
 * Print the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cba;

	for (cba = 'z'; cba >= 'a'; cba--)
	{
		putchar(cba);
	}
	putchar('\n');

	return (0);
}
