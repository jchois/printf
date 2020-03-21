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
	char *s;
	char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *nop = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(str, char *);

	if (!s)
	{
		s = "(ahyy)";
		while (*(s + i))
			print_main(*(s + i++));
		return (i);
	}

	while (*(s + i))
	{
		while (*(abc + r))
		{
			if (*(s + i) == *(abc + r))
			{
				print_main(*(nop + r));
				break;
			}
			r++;
		}
		i++, r = 0;
	}

	return (i);
}
