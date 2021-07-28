#include "holberton.h"

/**
 * get_function - structure that containing two variables
 * @format: Type of argument.
 * Return: pointer.
 */


int (*get_function(const char *format))(va_list arg)
{
	pr_tp prt[] = {
		{"c", _pr_char},
		{"s", _pr_string},
		{"%", _pr_percent},
		{"i", _pr_numbers},
		{"d", _pr_numbers},
		{NULL, NULL},

	};

	int j = 0;

	while (prt[j].tp != NULL)
	{
		if (format[0] == *(prt[j].tp))
		{
			break;

		}
		j++;

	}
	return (prt[j].f);
}

/**
 * _pr_anything - function that print anything last percent.
 * @format: string of characters to be printed.
 * @i: position in format.
 * Return: integer.
 */
int _pr_anything(const char *format, int i)
{
	_putchar(37);
	_putchar(format[i]);
	return (2);
}
