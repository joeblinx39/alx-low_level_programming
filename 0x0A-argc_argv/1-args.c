#include <stdio.h>

/**
 * main - prints amount of arguments passed into it
 * @argc: argumenmt count
 * @argv: argument array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int index;

	(void) argc;

	printf("%d\n", argc - 1);

	return (0);
}
