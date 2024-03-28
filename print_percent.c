#include "main.h"

/**
* print_percent - function that prints the percent sign '%'
* @ap: pointer to an argument of type va_list, not used here
*
* Return: number of characters printed
*/
int print_percent(va_list ap)
{
	(void)ap;
	_putchar('%');
	return (1);
}
