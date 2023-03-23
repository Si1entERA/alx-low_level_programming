#include "main.h"

/**
 * print_numbers - prints the number from 0 up to 9
 *
 * Return: always
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
