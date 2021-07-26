#include "holberton.h"
/**
 * _strlen - count the length of string
 * @s: string passed to function
 * Return: length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*(s + l))
		l++;

	return (l);

}
