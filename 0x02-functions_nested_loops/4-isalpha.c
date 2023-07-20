#include "main.h"

/**
 * _isalpha - checks for alphabetic characer
 * @c: the char to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'));
}
