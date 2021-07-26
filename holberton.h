#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct print_types- structure that containing two variables
 * @tp: Type of argument.
 * @f: The function associated.
 */
typedef struct print_types
{
	char *tp;
	void (*f)(va_list arg);
} pr_tp;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
