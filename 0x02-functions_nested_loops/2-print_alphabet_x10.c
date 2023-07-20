#include "main.h"
/**
 * print_alphabet_x10 - A function that prints 10 times the
 * alphabet, in lowercase, followed by a new line
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
