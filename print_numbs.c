#include "holberton.h"

/**
 * print_decimal - Prints decimal value
 * @d: Decimal to print
 * Return: Return decimal number
 */

int print_decimal(va_list d)
{
	int i, n, f;
	char *s;

	f = i = 0;
	n = va_arg(d, int);

	s = malloc(50);

	if (s == NULL)
		s = "NULL";

	if (n < 0)
	{
		f = print_main('-');
		n *= -1;
	}

	if (n == 0)
	{
		s[i] = n + '0';
	}

	if (n > 0)
	{
		while (n > 0)
		{
			s[i] = ((n % 10) + '0');
			i++;
			n /= 10;
		}
		_reverse(s);
		s[i + 1] = '\0';
	}

	s[i + 1] = '\0';

	for (i = 0; *(s + i); i++)
		print_main(*(s + i));

	free(s);

	return (i + f);
}

/**
 * _reverse - Reverse itoa function
 * @str: char to reverse
 * Return: Nothing
 */
void _reverse(char *str)
{
	char *start, *end, tmp;
	int i, j;

	for (i = 0; *(str + i); i++)
		;

	start = str;
	end = str;

	for (j = 0; j < (i - 1); j++)
		end++;

	for (j = 0; j < (i / 2); j++)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
