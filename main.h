#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
<<<<<<< HEAD
* struct print - defines a structure of symbols and functions to handle those.
=======
* print - defines a structure of symbols and functions to handle those.
>>>>>>> 8e1e2c725935f6c6cbbe0d58c5fdb44ef7da87cf
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
