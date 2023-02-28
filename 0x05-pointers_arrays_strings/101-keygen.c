#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 * Return: Always 0.
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, first_half_diff, second_half_diff;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		first_half_diff = (sum - 2772) / 2;
		second_half_diff = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			first_half_diff++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + first_half_diff))
			{
				password[index] -= first_half_diff;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + second_half_diff))
			{
				password[index] -= second_half_diff;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
