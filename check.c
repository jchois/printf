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
int checker(format fmt, int flag, struct tFormat fmtF[], va_list fm)
{
	int i, j, ou;

	i = ou = j = 0;
	while ((fmt && *(fmt + i)))
	{
		if ((*(fmt + i) != '%') && flag == 0)
		{
			ou += print_main(*(fmt + i));
		}
		else
		{
			while (j < 4)
			{
				if (((*(fmt + i + 1)) == fmtF[j].id[1]) && flag == 0)
				{
					ou += (fmtF[j].f)(fm), j = 0, flag = 1;
					break;
				}
				if (j == 3 && flag == 0)
				{
					if ((*(fmt + i + 1)))
						ou += print_main(*(fmt + i));
					else
					{
						ou = -1, flag = 1, j = 0;
						break;
					}
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
	va_end(fm);
	return (ou);
}
