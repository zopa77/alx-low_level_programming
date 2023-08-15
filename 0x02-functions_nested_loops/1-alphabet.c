#include "main.h"
/**
 * print_alphabet - function that print alphbet
 * Return: always 0
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a' ; s <= 'z' ; s++)
		_putchar(s);
	_putchar('\n');
}
