#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 *
 * Return: 1 (Success)
 * On error, -1 is retuned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
