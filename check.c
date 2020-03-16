#include "holberton.h"
/**
 * checker - It checks for any match with the format.
 * @fmt: Format to check.
 * @flag: Flag for check.
 * @fmtF: Array of structures.
 * @fm: Variadic Function Lists.
 *
 * Return: It returns characters.
 */
void checker(format fmt, int flag, struct tFormat fmtF[], va_list fm)
{
	int i, j;

	i = j = 0;
	while (fmt && *(fmt + i))
	{
		if ((*(fmt + i) != '%') && flag == 0)
			print_main(*(fmt + i));
		else
		{
			while (j < 3)
			{
				if (((*(fmt + i + 1)) == fmtF[j].id[1]) && flag == 0)
				{
					(fmtF[j].f)(fm);
					j = 0, flag = 1;
					break;
				}
				if (j == 2 && flag == 0)
				{
					print_main(*(fmt + i));
					j = 0;
					break;
				}
				if (flag == 1)
				{
					flag = 0;
					break;
				}
				j++;
			}
		}
		i++;
	}
}
