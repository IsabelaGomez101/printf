#include "holberton.h"

/**
 * _printf - function that prints anything.
 * @format: string of characters to be printed, and argument list.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0, t_len = 0;
	va_list arg;
	int (*f)(va_list arg);

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	while (format && format[i] != '\0')
	{
		if (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			len++;
		}
		else if (format[i] == '\0')
			return (len);
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		else if (format[i] == '%')
		{
			f = get_function(&format[i + 1]);
			if (f == NULL)
				t_len += _pr_anything(format, (i + 1));
			else
				t_len += f(arg);
			i++;
		}
		i++;
	}
	va_end(arg);
	len--;
	return (len + t_len);
}
