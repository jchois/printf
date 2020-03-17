#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* ALIAS */
typedef const char *format;
/* END */

/* STRUCTURE */
/**
 * struct tFormat - Checks the formats.
 * @id: Identifier.
 * @f: Functions.
 * struct tFormat - Checks the formats.
 */
typedef struct tFormat
{
	char *id;
	int (*f)();
} funcs;
/* END */

/* PROTOTYPES */
int _printf(format, ...);
int print_main(int);
int print_char(va_list);
int print_percent(void);
int print_str(va_list);
int print_decimal(va_list);
int print_int(va_list)
void _reverse(char *);
int checker(format, int, struct tFormat fmtF[], va_list);
/* END */

#endif /*_PRINTF_*/
