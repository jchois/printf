#include "holberton.h"

/**
 * print_decimal - Prints decimal value
 * @d: Decimal to print
 * Return: Return decimal number
 */

int print_decimal(va_list d)
{
	int i, f;
	char *s = NULL;
	long int n;
	unsigned long k;

	n = va_arg(d, int);

	f = i = 0, k = n;

	s = calloc(21, sizeof(char));

	if (n < 0)
		f = 1, k = (n *= -1);

	if (n == 0)
	{
		*(s + i) = '0', i++;
	}

	if (n > 0)
	{
		while (k > 0)
		{
			*(s + i) = ((k % 10) + '0'), i++;
			k /= 10;
		}
		if (f == 1)
			*(s + i) = '-', f = 0, i++;
		_reverse(s);
	}
	*(s + i) = '\0';

	for (i = 0; *(s + i); i++)
		print_main(*(s + i));

	free(s);
	return (i);
}

/**
 * print_binary - Prints binary values.
 * @lst: Decimal number to convert.
 * Return: It returns the number of characters printed and print binaries.
 */


int print_binary(va_list lst)
{
	int i = 0;
	unsigned int k;
	char *str;

	k = va_arg(lst, int);
	str = malloc(sizeof(char) * 50);

	if (k == 0)
		*(str + i++) = '0';

	while (k > 0)
	{
		*(str + i) = ((k % 2) + '0'), i++;
		k /= 2;
	}
	_reverse(str);
	*(str + i) = '\0';

	for (i = 0; *(str + i) != '\0'; i++)
		print_main(*(str + i));

	free(str);
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
