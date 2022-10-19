#include "main.h"

/**
 * _prinf -prints formated texts
 *
 * @format: character strings
 *
 * Return: number of printed strings
 */
int _printf(const char *format, ...);
{
	unsigned int i = 0, len = 0, ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;
}
