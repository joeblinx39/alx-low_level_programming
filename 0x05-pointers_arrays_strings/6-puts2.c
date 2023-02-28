#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * character, followed by a new line.
 *
 * @str: Pointer to the string to be printed.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string += 2)
		_putchar(str[string]);

	_putchar('\n');
}
