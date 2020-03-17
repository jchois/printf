#include "holberton.h"
#include <stdio.h>
int main(void)
{
	char c = 'C';
	char *str = "Hello";

	/* "Print the character c" */
	_printf("Print the character %c", c);

	/* "Print the string Hello" */
	_printf("Print the string %s", str);

	/* "Print a % sign" */
	_printf("Print a %% sign");

	/* "Print the number 5 since number 5 is great" */
	printf("Print the number %i since number %d is great", 56644, 4);

	return (0);
}
