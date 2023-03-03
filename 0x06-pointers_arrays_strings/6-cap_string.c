#include <ctype.h>

/**
 * cap_string - Capitalize first letter of every word
 * @str: string yo be capitalized
 * Return: str
 */
char *cap_string(char *str)
{
	int index;


	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = toupper(str[0]);

	/* Capitalize letters after separators */
	for (index = 1; str[index] != '\0'; index++)
	{
		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == '\"' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}')
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] = toupper(str[index]);
		}
	}

	return (str);
}

