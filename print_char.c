#include "main.h"

/**
* print_char - function that prints a single character.
* @ap: pointer to an argument of type va_list.
*
* Return: number of character printed
*/
int print_char(va_list ap)
{
	char c = va_arg(ap, int);
	_putchar(c);

	return (1);
}
