#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 * Return: alomem (success)
 */
void *malloc_checked(unsigned int b)
{
	int *alomem;

	alomem = malloc(b);

	if (alomem == NULL)
		exit(98);

	return (alomem);
}
