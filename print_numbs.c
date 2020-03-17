#include "holberton.h"

/**
 * print_decimal - Prints decimal value
 * @d: Decimal to print
 * Return: Return decimal number
 */

int print_decimal(va_list d)
{
	long int i, n, f;
	char *s;
	unsigned long int x;

	x = i = 0;
	n = va_arg(d, int);

	if (n < 0)
		f = 1, x = -n;

	if (x == 0)
	{
		s = malloc(sizeof(char) * 2);
		*(s + i) = '0', i++;
	}

	if (x > 0)
	{
		s = malloc(sizeof(char) * 50);
		while (x > 9)
		{
			s[i] = ((x % 10) + '0'), i++;
			x /= 10;
		}
		if (x <= 9)
			s[i] = (x + '0'), i++;
		if (f == 1)
			s[i++] = '-', i++;
		_reverse(s);
	}
	s[i] = '\0';

	for (i = 0; *(s + i); i++)
		print_main(*(s + i));

	free(s);
	return (i);
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

