This project creates our own version of printf from the standard library. This is a group project from HolbertonSchool training

## Description

Printf instruction allows you to display on the screen the value of a variable, a label, the value of an expression, a character string, and this in various formats

## Character

Charactère	description	exemple
%c	print a single character	H
%i et %d	print an int convert to decimal	9
%%	print a percent sign	%

## Prototype

  int _printf(const char *format, ...)
This prototype defines a function called _printf which takes a format string as its first parameter and which can take a variable number of arguments (,...)

## Usage

To use the custom printf function in your C program, follow these steps:

Include the main.h header file in your source file.
Call the _printf function with the desired format string and optional arguments.


## Exemple

  int age;
  age = 22;
  _printf ( "I am %d years old\n", age )
displayed on screen --> I am 22 years old

  char *str;
  str =  Holberton
  _printf ( "My school is  %s\n", str )
displayed on screen --> My school is Holberton

  char *str;
  char letter = C;
  str =  Holberton
  _printf ( "I have learn the language %c in %s\n", letter, str )
display on screen --> I have learn the language C in Holberton

## Authors

This project was developed by:

Maxime Doyen
Zakaria Khadra

#C-23-Thonon les bains

## Flowchart

![alt text](<Diagramme sans nom.drawio.png>)

