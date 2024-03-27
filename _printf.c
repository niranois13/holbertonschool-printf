#include "main.h"

/**
* _printf - function that determines the type of arguments passed through
* @format: number of arguments passed through
*
* Return: count
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
		/*{"%", print_percent},*/
		{NULL, NULL},
	};

	va_list(ap);
	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; ops[i].sym != NULL; i++)
			{
				if (ops[i].sym[0] == *format)
				{
					count = count + ops[i].func(ap);
					break;
				}
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
