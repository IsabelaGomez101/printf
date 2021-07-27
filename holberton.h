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
	int (*f)();
} pr_tp;

/*PROTOTYPES*/
int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int (*get_function(const char *format))(va_list arg);

/*Prototypes file functions*/
int _pr_char(va_list arg);
int _pr_string(va_list arg);
int _pr_percent(void);
#endif
