#include "main.h"
/**
 * _puts - Prints a string
 * @str: The string to print
 * Return: String and a new line
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
