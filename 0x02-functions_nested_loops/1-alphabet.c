#include "main.h"
/**
 * print_alphabet - make the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
