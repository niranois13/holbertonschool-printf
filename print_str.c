#include "main.h"

/**
* print_str - function that prints a string
* @ap: pointer to an argument of type va_list
*
* Return: number of character printed
*/
int print_str(va_list ap)
{
	int len = 0;
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}

	return (len);
}
