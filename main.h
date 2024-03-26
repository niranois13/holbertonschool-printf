#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print - defines a structure of symbols and functions
* @sym: symbol of the operator
* @func: functions to choose from based on the operator
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


#endif /* MAIN_H */
