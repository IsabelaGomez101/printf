#include "holberton.h"

/**
 * _pr_char - function that print a character.
 * @arg: list arguments.
 * Return: length.
 */

int _pr_char(va_list arg)
{
	 char c = va_arg(arg, int);

	 _putchar(c);
return (1);
}

/**
 * _pr_string - function that print a string.
 * @arg: list arguments.
 * Return: length.
 */

int _pr_string(va_list arg)
{
	int i;
	char *s = va_arg(arg, char *);

	for (i = 0; i < _strlen(s); i++)
	{
		_putchar(s[i]);

	}
	return (_strlen(s));
}
