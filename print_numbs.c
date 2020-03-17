#include "holberton.h"

/**
 * print_decimal - Prints decimal value
 * @d: Decimal to print
 * Return: Return decimal number
 */

int print_decimal(va_list d)
{
	char *str;
	int i;

	i = va_arg(d, int);

	str = _itoa(i);

	i = 0;

	while (*(str + i))
	{
		print_main(*(str + i));
		i++;
	}

	free(str);

	return (i);
}

/**
 * _itoa - converts a int to string
 * @n: number to convert
 * Return: Return char
 */

char *_itoa(int n)
{
	int i;
	char *s;

	s = malloc(sizeof(char *));

	i = 0;

	if (n < 0)
	{
		print_main('-');
		n *= -1;
	}

	if (n == 0)
	{
		*(s + i) = (n + '0');
	}

	while (n > 0)
	{
		*(s + i) = ((n % 10) + '0');
		i++;
		n /= 10;
	}

	_reverse(s);

	*(s + i + 1) = '\0';

	return (s);
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
