#include "main.h"

/**
 * print_last_digit - prints the last digit of an int
 *
 * @n: the variable
 *
 * Return: the last digit of n
 *
 */
int print_last_digit(int n)
{
	int remainder;

	if (n < 0)
		remainder = -1 * (n % 10);
	else
		remainder = n % 10;
	_putchar((remainder % 10) + '0');
	return (remainder % 10);
}
