#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: the input string to be encoded
 * Return: pointer to str
 */
char *leet(char *str)
{
	int index1, index2;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (index1 = 0; str[index1] != '\0'; index1++)
	{
		for (index2 = 0; letters[index2] != '\0'; index2++)
		{
			if (str[index1] == letters[index2])
			{
				str[index1] = numbers[index2];
				break;
			}
		}
	}

	return (str);
}

