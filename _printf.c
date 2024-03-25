#include "main.h"

/**
* _printf - function that determines the type of arguments passed through
* @format: number of arguments passed through
*
* Return: 0 if success
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	va_list ap;

	print arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},
		{NULL, NULL},
	};

	va_start (ap, format);

	while
}
