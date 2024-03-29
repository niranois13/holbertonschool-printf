This project creates our own version of printf from the C standard library.
This is a group school project for HolbertonSchool.

## Description

Our implementation of _printf allows you to display, on the standard output, the value of a variable, a label, the value of an expression, a character string, and this in various formats

## Requirements

We had to compile the program with gcc, using the options -Wall - Werror - Wextra -pedantic -td=gnu89 in the Ubuntu 20.04 LTS environment.
Our code also had to respect the Betty coding style.

## Character

This implementation handles those following format specifiers:
"%c" : prints a single character.
"%s" : prints a string of characters.
"%i" and "%d" : print integers.
"%%" : prints a percent sign %

## Prototype

int _printf(const char *format, ...)
This prototype defines the function _printf which takes a format string as its first parameter and which can take a variable number of arguments (,...). It returns the number of characters printed.
Usage
To use the custom printf function in your C program, follow these steps:
- Include the main.h header file in your source file.
- Call the _printf function with the desired format string and optional arguments.

## Exemple

int age;
age = 22;
_printf ( "I am %d years old\n", age );
displayed on screen --> I am 22 years old
char *str;
str = "Holberton";
_printf ( "My school is %s\n", str );
displayed on screen --> My school is Holberton
char *str;
char letter = C;
 str = "Holberton"
 _printf ( "I have learn the language %c in %s\n", letter, str );
 display on screen --> I have learn the language C in Holberton

## Authors

This project was developed by:
Nicolas Doyen Zakaria Khadra
#C-23-Thonon les bains

## Flowchart

https://imgur.com/a/Gv9u8pU 