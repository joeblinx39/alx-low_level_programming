#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all the letters of the alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
