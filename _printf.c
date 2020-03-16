#include "holberton.h"
/**
 * _printf - It prints with different formats.
 * @fm: Format to print.
 *
 * Return: Always returns (0).
 */
int _printf(format fm, ...)
{
	va_list fmt;
	int flag;
	funcs pFmt[] = {
		{"%c", print_char},
		{"%s", print_str},
		{"%%", print_percent},
	};

	if (fm == NULL)
		return (-1);

	flag = 0;
	va_start(fmt, fm);

	checker(fm, flag, pFmt, fmt);

	va_end(fmt);
	return (0);
}
