#include "holberton.h"
/**
 * print_main - It prints to stdout.
 * @c: Char to print.
 */
int print_main(int c)
{
	return(write(1, &c, 1));
}
/**
 * print_char - It prints to stdout.
 * @ch: List VF to print.
 */
int print_char(va_list ch)
{
	char c;

	c = (char)va_arg(ch, int);

	return(print_main(c));
}
/**
 * print_percent - It prints to stdout.
 */
int print_percent(void)
{
	return(print_main('%'));
}
/**
 * print_str - It prints to stdout.
 * @str: List VF to print.
 */
int print_str(va_list str)
{
	int i;
	char *txt;

	txt = va_arg(str, char*);

	if (!txt)
		txt = "(null)";

	for (i = 0; *(txt + i); i++)
		print_main(*(txt + i));

	return(i);
}
