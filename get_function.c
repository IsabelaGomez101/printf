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
