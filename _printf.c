#include "main.h"

/**
* _printf - Custom implementation of the C printf() function.
*			It formats and prints data to the standard output.
*
* @format: A pointer to a string containing the format control string.
*
* Return:  The number of characters printed on success. -1 if it fails.
*/

int _printf(const char *format, ...)
{
	int i;
	int count = 0;

	print ops[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},
		{NULL, NULL},
	};

	va_list(ap);
	va_start(ap, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			for (i = 0; ops[i].sym != NULL; i++)
			{
				if (ops[i].sym[0] == *format)
				{
					count = count + ops[i].func(ap);
					break;
				}
			}
			if (ops[i].sym == NULL)
			{
				_putchar('%');
				_putchar(*format);
				count = count +2;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}
