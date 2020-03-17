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
	int flag, chk;
	funcs pFmt[] = {
		{"%c", print_char},
		{"%s", print_str},
		{"%%", print_percent},
		{"%d", print_decimal},
		{"%i", print_decimal}
	};

	if (!fm)
		return (-1);

	flag = 0;
	va_start(fmt, fm);

	chk = checker(fm, flag, pFmt, fmt);

	va_end(fmt);
	return (chk);
}
