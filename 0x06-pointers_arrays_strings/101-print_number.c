#include "main.h"

/**
 * print_number - prints integers
 * @n: number to be printed
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_numbers(x / 10);
	_putchar((x % 10) + '0');
}

