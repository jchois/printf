#include <stdio.h>
#include "holberton.h"
int main(void)
{
	printf("Expected:  %d\n", 6);
	_printf("Actual :   %d\n", 6);
	printf("Expected:  %d\n", 1998);
	_printf("Actual :   %d\n", 1998);
	printf("Expected:  %d\n", -1998);
	_printf("Actual :   %d\n", -1998);
	printf("Expected:  %d\n", 0);
	_printf("Actual :   %d\n", 0);
	printf("Expected:  %d\n", -0);
	_printf("Actual :   %d\n", -0);
	printf("Expected:  %d\n", 6.7);
	_printf("Actual :   %d\n", 6.7);
	printf("Expected:  %d\n", 'H');
	_printf("Actual :   %d\n", 'H');

	return (0);
}
