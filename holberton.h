#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_types- structure that containing two variables
 * @tp: Type of argument.
 * @f: The function associated.
 */
typedef struct print_types
{
	char *tp;
	int (*f)();
} pr_tp;

/*PROTOTYPES*/
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_function(const char *format))(va_list arg);
int _pr_anything(const char *format, int i);

/*Prototypes file function*/
int _pr_char(va_list arg);
int _pr_string(va_list arg);
int _pr_percent(void);
int _pr_numbers(va_list arg);

#endif
