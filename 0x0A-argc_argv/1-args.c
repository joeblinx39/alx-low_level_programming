#include <stdio.h>

/**
 * main - prints all the arguments passed
 * @argc: argumenmt count
 * @argv: the arguments passed
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int index;

	(void) argc;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);

	return (0);
}
