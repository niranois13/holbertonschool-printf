#include "main.h"

/**
* print_int - Print an integer
* @ap: List of arguments
* Return: Number of characters printed
*/

int print_int(va_list ap)
{
	int num = va_arg(ap, int);
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	count += print_number(num);

	return (count);
}

/**
 * print_number - Recursively print each digit of a number
 * @num: Number to print
 * Return: Number of characters printed
 */
int print_number(int num)
{
	int count = 0;

	if (num / 10 != 0)
		count += print_number(num / 10);

	_putchar(num % 10 + '0');
	return (count);
}
