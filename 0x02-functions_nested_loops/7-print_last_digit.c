#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ldig = n % 10;

	if (ldig < 0)
		ldig *= -1;

	_putchar(ld + '0');

	return (0);
}
