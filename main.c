#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%c", '\0');
    printf("%c", '\0');
    _printf("%");
    printf("%");
    _printf("%!\n");
    printf("%!\n");
    _printf("%k\n");
    printf("%k\n");
    return (0);
}
