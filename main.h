#ifndef MAIN_H
#define MAIN_H

/*heder files*/
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - typedef struct
 *
 * @id: Format
 * @fun: pointer to function
 **/
typedef struct format
{
	char id;
	int (*fun)(va_list);
} form;

/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/* printf.c */
int _printf(const char *, ...);

/* printers */
int print_s(va_list);
int print_c(va_list);
int print_i(va_list);
int print_b(va_list);
int print_rot(va_list);
int print_u(va_list);
int print_o(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_p(va_list);
int print_rev(va_list);


#endif
