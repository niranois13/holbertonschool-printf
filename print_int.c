#include "main.h"

/**
* print_int - Print an integer
* @ap: List of arguments
* Return: Number of characters printed
*/

int print_int(va_list ap)
{
	int num = va_arg(ap, int);
	int number_total_characters = 0;
	int chiffre_total_in_number = 1;
	unsigned int num_positif;

	if (num < 0)
	{
		number_total_characters += _putchar('-');
		num = -num;
	}

	num_positif = num;

	while ((num_positif / chiffre_total_in_number) > 9)
	{
		chiffre_total_in_number *= 10;
	}

	while (chiffre_total_in_number >= 1)
	{
		_putchar((num_positif / chiffre_total_in_number) + '0');
		num_positif %= chiffre_total_in_number;
		chiffre_total_in_number /= 10;
		number_total_characters++;
	}
	return (number_total_characters);
}
