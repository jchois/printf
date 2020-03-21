#include "holberton.h"

/**
* rot13 - Prints the string in ROT13.
* @str: String to translate.
*
* Return: Number of characters printed.
*/

int rot13(va_list str)
{
	int i = 0, r = 0;
	char *s, *tmp;
	char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *nop = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(str, char *);
	tmp = calloc(sizeof(s) + 1, 1);

	while (*(s + i))
	{
		while (*(abc + r))
		{
			if (*(s + i) == *(abc + r))
			{
				*(tmp + i) = *(nop + r);
				break;
			}
			r++;
		}
		i++, r = 0;
	}

	*(tmp + i) = '\0';

	i = 0;

	while (*(tmp + i))
		print_main(*(tmp + i++));

	free(tmp);
	return (i);
}
