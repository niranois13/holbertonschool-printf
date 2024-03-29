#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* struct print - defines a structure of symbols and functions to handle those.
* @sym: symbol representing the format specifier.
* @func: function pointer to the handler functions.
*/
typedef struct print
{
	char *sym;
	int (*func)(va_list);
} print;

/* Functions prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int print_percent(va_list ap);
int print_int(va_list ap);
int print_number(int num);



#endif /* MAIN_H */
