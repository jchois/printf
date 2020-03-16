#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/* TESTING */
/*#include <stdio.h>*/
/*#include <limits.h>*/
/* END */

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
	void (*f)();
} funcs;
/* END */

/* PROTOTYPES */
int _printf(format, ...);
void print_main(int);
void print_char(va_list);
void print_percent(void);
void print_str(va_list);
int checker(format, int, struct tFormat fmtF[], va_list);
/* END */

#endif /*_PRINTF_*/
