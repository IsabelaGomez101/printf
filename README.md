# PROJECT C PRINTF
 
_The objective of this project is to create our own printf function_

## Introduction 📖

_What is the printf function?_

The printf function prints a message on the screen using a “format string” that includes the instructions to mix multiple strings into the final string to be displayed on the screen.

For more information about printf click here  ["Secrets of printf"](https://www.cypress.com/file/54761/download)

Next we will explain to you how we create our printf function.

## Requirements ⚙️

Authorized functions and macros
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

## Prototype 🛠

The following is the prototype for our function:
```
int _printf(const char *format, ...);
```
* _printf : function that produces output according to a format.
* format is a character string. The format string is composed of zero or more directives.
* Returns: the number of characters printed (excluding the null byte used to end output to strings)

## Format specifiers ️📋

_what are format specifiers and how to use them?_

When the _printf function is passed a list of arguments, a format specifier must be written for each argument. In the _printf function, the format specifiers set the screen output format of the arguments.

The simplest way to write a format specifier is with the percentage character (%) followed by a cast character that indicates the data type of the argument.

The following are the specifiers for format that you can use:

| Specifier | Description |
| ------ | ------ |
| "c" | output of a character |
| "s" | output of a string |
| "d" | output of an integer |
| "i" | output of an integer unsigned |
| "% | output output character percentage |

## Files used for our function

* **holberton.h:**  This file contains all the prototypes of the functions and structures used.
* **_putchar:**  File containing our own putchar function that prints character by character. Prototype:
  ```
  int _putchar(char c);
  ```
* **funtions.c:**  This file contains all the functions associated with each specifier, these functions format the arguments.
functions it contains:
  ```
  int _pr_char(va_list arg);
  int _pr_string(va_list arg);
  int _pr_percent(void);
  int _pr_numbers(va_list arg);
  ```
* **get_function.c:** This file contains a structure that checks the passed specifier and associates it with the corresponding function to format the argument.
functions it contains:
  ```
  int (*get_function(const char *format))(va_list arg);
  int _pr_anything(const char *format, int i);
  ```
* **_printf:** This file contains our main function.

To compile our function you can use the following command
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
## Flowchart

To understand how our function works, check the flowchart.
![Flowchart](https://github.com/IsabelaGomez101/printf/blob/master/images/Printf.png)

## Authors ✒️

* Estefania Ruiz Acevedo - [knia10](https://github.com/knia10)
* Laura Isabela Gómez - [IsabelaGomez101](https://github.com/IsabelaGomez101)
