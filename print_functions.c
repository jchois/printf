#include "holberton.h"
/**
 * print_main - It prints to stdout.
 * @c: Char to print.
 */
void print_main(int c)
{
	write(1, &c, 1);
}
/**
 * print_char - It prints to stdout.
 * @ch: List VF to print.
 */
void print_char(va_list ch)
{
	print_main(va_arg(ch, int));
}
/**
 * print_percent - It prints to stdout.
 */
void print_percent(void)
{
	print_main('%');
}
/**
 * print_str - It prints to stdout.
 * @str: List VF to print.
 */
void print_str(va_list str)
{
	int i;
	char *txt;

	txt = va_arg(str, char*);

	if (txt == NULL)
		return;

	for (i = 0; *(txt + i) != '\0'; i++)
		print_main(*(txt + i));

}
