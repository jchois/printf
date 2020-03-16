#include "holberton.h"
/**
 * print_main - It prints to stdout.
 * @c: Char to print.
 * Return: It returns to stdout.
 */
int print_main(int c)
{
	return (write(1, &c, 1));
}
/**
 * print_char - It prints to stdout.
 * @ch: List VF to print.
 * Return: It returns to stdout.
 */
int print_char(va_list ch)
{
	return (print_main(va_arg(ch, int)));
}
/**
 * print_percent - It prints to stdout.
 * Return: It returns to stdout.
 */
int print_percent(void)
{
	print_main('%');
	return (1);
}
/**
 * print_str - It prints to stdout.
 * @str: List VF to print.
 * Return: It returns to stdout.
 */
int print_str(va_list str)
{
	int i;
	char *txt;

	txt = va_arg(str, char*);
	i = 0;

	if (!txt)
		txt = "(null)";

	while (*(txt + i))
	{
		print_main(*(txt + i));
		i++;
	}

	return (i);
}
