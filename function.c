#include "holberton.h"
/**
 * _pr_char - function that print a character.
 * @arg: list arguments.
 * Return: length.
 */
int _pr_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
/**
 * _pr_string - function that print a string.
 * @arg: list arguments.
 * Return: length.
 */
int _pr_string(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
/**
 * _pr_percent - function that print a percent.
 * Return: length.
 */
int _pr_percent(void)
{
	_putchar(37);
	return (1);
}
/**
 * _pr_numbers - function that print numbers.
 * @arg: list the arguments.
 * Return: length.
 */
int _pr_numbers(va_list arg)
{
int num = va_arg(arg, int);
int div = 1;
int n, digit, uldig;
int l = 0;

uldig = num % 10; /**variable que guarda el ultimo digito*/
num = num / 10;
if (num < 0)
{
_putchar('-');
num = num * -1;
uldig = uldig * -1;
l++;
}
n = num;
while ((num / 10) != 0)
{
num = num / 10;
div *= 10;
}
while (div >= 1)
{
digit = n / div;
_putchar(digit + '0');
n = n % div;
div = div / 10;
l++;
}
_putchar(uldig + '0');
l++;
return (l);
}
