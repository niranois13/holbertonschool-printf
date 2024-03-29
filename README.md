                                                   PRINTF

This project creates our own version of printf from the standard library. This is a group project from HolbertonSchool training


## Description
Printf instruction allows you to display on the screen the value of a variable, a label, the value of an expression, a character string, and this in various formats





## Charactère

| Charactère | description |  exemple
| --------| -----------|------
|%c|print a single character | H
|%i et %d | print an int convert to decimal | 9
|%%|print a percent sign| %
|%s|print a string of characters| HOLBERTON
|%f|print a floating-point number| 9,8






## Prototype

```bash
  int _printf(const char *format, ...)
```
This prototype defines a function called _printf which takes a format string as its first parameter and which can take a variable number of arguments (,...)

## Exemple
```bash
  int age;
  age = 25;
  _printf ( "I am %d years old\n", age )
```

displayed on screen --> I am 25 years old

```bash
  char *str;
  str =  Holberton
  _printf ( "My school is  %s\n", str )
```

displayed on screen -->  My school is Holberton

```bash
  char *str;
  char letter = C;
  str =  Holberton
  _printf ( "I have learn the language %c in %s\n", letter, str )
```

display on screen --> I have learn the language C in Holberton

## Organigramme
